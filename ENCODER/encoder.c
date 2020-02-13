/*
 * encoder.c
 *
 *  Created on: Jan 22, 2020
 *      Author: RICHARD
 */
#include "encoder.h"

//
// initEQEP - Function to configure eQEP1.
//
void EQEP1_Init(void)
{
    GPIO_setPinConfig(GPIO_20_EQEP1A);
    GPIO_setPadConfig(20, GPIO_PIN_TYPE_STD);
    GPIO_setPinConfig(GPIO_21_EQEP1B);
    GPIO_setPadConfig(21, GPIO_PIN_TYPE_STD);
    //
    // Configure the decoder for up-count mode, counting both rising and
    // falling edges (that is, 2x resolution)
    //
    EQEP_setDecoderConfig(EQEP1_BASE, (EQEP_CONFIG_2X_RESOLUTION |
                                       EQEP_CONFIG_QUADRATURE |
                                       EQEP_CONFIG_NO_SWAP));
    EQEP_setEmulationMode(EQEP1_BASE, EQEP_EMULATIONMODE_RUNFREE);


    EQEP_setPosition(EQEP1_BASE, 1000000);
    //
    // Configure the position counter to reset on an index event
    //
    EQEP_setPositionCounterConfig(EQEP1_BASE, EQEP_POSITION_RESET_MAX_POS,
                                  0xFFFFFFFF);

    //
    // Enable the eQEP1 module
    //
    EQEP_enableModule(EQEP1_BASE);
}

void EQEP2_Init(void)
{
    GPIO_setPinConfig(GPIO_54_EQEP2A);
    GPIO_setPadConfig(54, GPIO_PIN_TYPE_STD);
    GPIO_setPinConfig(GPIO_55_EQEP2B);
    GPIO_setPadConfig(55, GPIO_PIN_TYPE_STD);
    //
    // Configure the decoder for up-count mode, counting both rising and
    // falling edges (that is, 2x resolution)
    //
    EQEP_setDecoderConfig(EQEP2_BASE, (EQEP_CONFIG_2X_RESOLUTION |
                                       EQEP_CONFIG_QUADRATURE |
                                       EQEP_CONFIG_NO_SWAP));
    EQEP_setEmulationMode(EQEP2_BASE, EQEP_EMULATIONMODE_RUNFREE);


    EQEP_setPosition(EQEP2_BASE, 1000000);
    //
    // Configure the position counter to reset on an index event
    //
    EQEP_setPositionCounterConfig(EQEP2_BASE, EQEP_POSITION_RESET_MAX_POS,
                                  0xFFFFFFFF);

    //
    // Enable the eQEP1 module
    //
    EQEP_enableModule(EQEP2_BASE);
}
