/*******************************************************************************
* File Name: cycfg_peripherals.c
*
* Description:
* Peripheral Hardware Block configuration
* This file was automatically generated and should not be modified.
* Configurator Backend 3.0.0
* device-db 4.3.0.3855
* mtb-pdl-cat1 3.2.0.20064
*
********************************************************************************
* Copyright 2023 Cypress Semiconductor Corporation (an Infineon company) or
* an affiliate of Cypress Semiconductor Corporation.
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
********************************************************************************/

#include "cycfg_peripherals.h"

cy_stc_csd_context_t cy_csd_0_context = 
{
    .lockKey = CY_CSD_NONE_KEY,
};
const cy_stc_sysanalog_config_t AREF_config = 
{
    .startup = CY_SYSANALOG_STARTUP_FAST,
    .iztat = CY_SYSANALOG_IZTAT_SOURCE_LOCAL,
    .vref = CY_SYSANALOG_VREF_SOURCE_LOCAL_1_2V,
    .deepSleep = CY_SYSANALOG_DEEPSLEEP_DISABLE,
};
const cy_stc_sar_config_t ADC_config = 
{
    .ctrl = (uint32_t) ADC_CTL,
    .sampleCtrl = (uint32_t) ADC_SAMPLE,
    .sampleTime01 = (1023UL << (uint32_t)CY_SAR_SAMPLE_TIME0_SHIFT) | (2UL << (uint32_t)CY_SAR_SAMPLE_TIME1_SHIFT),
    .sampleTime23 = (2UL << (uint32_t)CY_SAR_SAMPLE_TIME2_SHIFT) | (2UL << (uint32_t)CY_SAR_SAMPLE_TIME3_SHIFT),
    .rangeThres = (0UL << (uint32_t)CY_SAR_RANGE_HIGH_SHIFT) | (0UL << (uint32_t)CY_SAR_RANGE_LOW_SHIFT),
    .rangeCond = CY_SAR_RANGE_COND_BELOW,
    .chanEn = 1UL,
    .chanConfig = {(uint32_t) ADC_CH0_CONFIG, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL},
    .intrMask = CY_SAR_INTR_EOS,
    .satIntrMask = 0UL,
    .rangeIntrMask = 0UL,
    .configRouting = false,
    .vrefMvValue = ADC_VREF_MV,
    .clock = CY_SAR_CLK_PERI,
    .fifoCfgPtr = NULL,
    .trTimer = false,
    .scanCnt = false,
    .scanCntIntr = false,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t ADC_obj = 
    {
        .type = CYHAL_RSC_ADC,
        .block_num = 0,
        .channel_num = 0,
    };
#endif //defined (CY_USING_HAL)
const cy_stc_scb_uart_config_t UART_config = 
{
    .uartMode = CY_SCB_UART_STANDARD,
    .enableMutliProcessorMode = false,
    .smartCardRetryOnNack = false,
    .irdaInvertRx = false,
    .irdaEnableLowPowerReceiver = false,
    .oversample = 8,
    .enableMsbFirst = false,
    .dataWidth = 8UL,
    .parity = CY_SCB_UART_PARITY_NONE,
    .stopBits = CY_SCB_UART_STOP_BITS_1,
    .enableInputFilter = false,
    .breakWidth = 11UL,
    .dropOnFrameError = false,
    .dropOnParityError = false,
    .receiverAddress = 0x0UL,
    .receiverAddressMask = 0x0UL,
    .acceptAddrInFifo = false,
    .enableCts = false,
    .ctsPolarity = CY_SCB_UART_ACTIVE_LOW,
    .rtsRxFifoLevel = 0UL,
    .rtsPolarity = CY_SCB_UART_ACTIVE_LOW,
    .rxFifoTriggerLevel = 63UL,
    .rxFifoIntEnableMask = 0UL,
    .txFifoTriggerLevel = 63UL,
    .txFifoIntEnableMask = 0UL,
};
#if defined (CY_USING_HAL)
    const cyhal_resource_inst_t UART_obj = 
    {
        .type = CYHAL_RSC_SCB,
        .block_num = 5U,
        .channel_num = 0U,
    };
#endif //defined (CY_USING_HAL)


void init_cycfg_peripherals(void)
{
    Cy_SysClk_PeriphAssignDivider(PCLK_CSD_CLOCK, CY_SYSCLK_DIV_8_BIT, 0U);
    Cy_SysClk_PeriphAssignDivider(PCLK_PASS_CLOCK_SAR, CY_SYSCLK_DIV_8_BIT, 2U);
    Cy_SysClk_PeriphAssignDivider(PCLK_SCB5_CLOCK, CY_SYSCLK_DIV_8_BIT, 1U);
}

void reserve_cycfg_peripherals(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&ADC_obj);
    cyhal_hwmgr_reserve(&UART_obj);
#endif //defined (CY_USING_HAL)
}
