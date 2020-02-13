#include "device.h"
#include "driverlib.h"

#include "PID_C3.h"

#include "pwm.h"
#include "timer.h"
#include "encoder.h"

// Global Variables
float speed;
float setpoint;
float output;
float position;

DCL_PID PID_POSITION = PID_DEFAULTS;

interrupt void TIMER0_IRQ(void);

int main(void)
{
    Device_init();
    Device_initGPIO();

    Interrupt_initModule();
    Interrupt_initVectorTable();

    Interrupt_register(INT_TIMER0, &TIMER0_IRQ);


    TIMER0_Init();
    TIMER_Config(CPUTIMER0_BASE, DEVICE_SYSCLK_FREQ, 50); // interrupt every 40us

    EQEP1_Init();
    EQEP2_Init();
    PWM1_Init();
    //
    // Enable Global Interrupt (INTM) and realtime interrupt (DBGM)
    //
    EINT;
    ERTM;

    PID_POSITION.Kp = 12.5f;
    PID_POSITION.Ki = 4.5f;
    PID_POSITION.Kd = 0.0001f;
    PID_POSITION.Umax = 1000.0f;
    PID_POSITION.Umin = -1000.0f;


    while(1)
    {

    }
}

interrupt void TIMER0_IRQ(void)
{
    position = EQEP_getPosition(EQEP1_BASE);
    setpoint = EQEP_getPosition(EQEP2_BASE);
    output = DCL_runPID_C3(&PID_POSITION, setpoint, position, 0.001f);
    PWM_Control(output);
    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}

