/*
 * PID_C3.h
 *
 *  Created on: Feb 3, 2020
 *      Author: RICHARD
 */

#ifndef PID_C3_H_
#define PID_C3_H_

#include "math.h"
#include "string.h"
#include "stdint.h"
#include "hw_types.h"


//! \brief          Defines the DCL_PID shadow parameter set
//!
typedef volatile struct dcl_pid_sps {
    float32_t Kp;       //!< Proportional gain
    float32_t Ki;       //!< Integral gain
    float32_t Kd;       //!< Derivative gain
    float32_t Kr;       //!< Set point weight
    float32_t c1;       //!< D path filter coefficient 1
    float32_t c2;       //!< D path filter coefficient 2
    float32_t Umax;     //!< Upper saturation limit
    float32_t Umin;     //!< Lower saturation limit
} DCL_PID_SPS;

//! \brief          Defines the DCL_PID active controller structure
//!
typedef volatile struct dcl_pid {
    float32_t Kp;       //!< Proportional gain
    float32_t Ki;       //!< Integral gain
    float32_t Kd;       //!< Derivative gain
    float32_t Kr;       //!< Set point weight
    float32_t c1;       //!< D path filter coefficient 1
    float32_t c2;       //!< D path filter coefficient 2
    float32_t d2;       //!< D path filter intermediate storage 1
    float32_t d3;       //!< D path filter intermediate storage 2
    float32_t i10;      //!< I path intermediate storage
    float32_t i14;      //!< Intermediate saturation storage
    float32_t Umax;     //!< Upper saturation limit
    float32_t Umin;     //!< Lower saturation limit
    DCL_PID_SPS *sps;   //!< Pointer to the shadow parameter set
} DCL_PID;

//! \brief          Defines default values to initialize the DCL_PID structure
//!
#define PID_DEFAULTS {  1.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, \
                        0.0f, 1.0f, 1.0f, -1.0f, \
                        NULL }

//! \brief          Executes an ideal form PID controller on the FPU32
//! \param[in] p    Pointer to the DCL_PID structure
//! \param[in] rk   The controller set-point reference
//! \param[in] yk   The measured feedback value
//! \param[in] lk   External output clamp flag
//! \return         The control effort
//!
static inline float32_t DCL_runPID_C2(DCL_PID *p, float32_t rk, float32_t yk, float32_t lk)
{
    float32_t v1, v4, v5, v8, v9, v10, v12;

    v5 = (p->Kr * rk) - yk;
    v8 = ((rk - yk) * p->Ki * p->Kp * p->i14) + p->i10;
    p->i10 = v8;
    v1 = yk * p->Kd * p->c1;
    v4 = v1 - p->d2 - p->d3;
    p->d2 = v1;
    p->d3 = v4 * p->c2;
    v9 = ((v5 - v4) * p->Kp) + v8;
    v10 = (v9 > p->Umax) ? p->Umax : v9;
    v10 = (v10 < p->Umin) ? p->Umin : v10;
    v12 = (v10 == v9) ? 1.0f : 0.0f;
    p->i14 = v12 * lk;

    return(v10);
}

//! \brief          Executes an parallel form PID controller on the FPU32
//! \param[in] p    Pointer to the DCL_PID structure
//! \param[in] rk   The controller set-point reference
//! \param[in] yk   The measured feedback value
//! \param[in] lk   External output clamp flag
//! \return         The control effort
//!
static inline float32_t DCL_runPID_C3(DCL_PID *p, float32_t rk, float32_t yk, float32_t lk)
{
    float32_t v1, v4, v5, v6, v8, v9, v10, v12;

    v5 = rk - yk;
    v6 = v5 * p->Kp;
    v8 = v5 * p->Ki * p->i14 + p->i10;
    p->i10 = v8;
    v1 = v5 * p->Kd * p->c1;
    v4 = v1 - p->d2 - p->d3;
    p->d2 = v1;
    p->d3 = v4 * p->c2;
    v9 = v6 + v8 + v4;
    v10 = (v9 > p->Umax) ? p->Umax : v9;
    v10 = (v10 < p->Umin) ? p->Umin : v10;
    v12 = (v10 == v9) ? 1.0f : 0.0f;
    p->i14 = v12 * lk;

    return(v10);
}

#endif /* PID_C3_H_ */
