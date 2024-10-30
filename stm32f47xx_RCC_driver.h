/*
 * stm32f407xx_rcc_driver.h
 *
 *  Created on: May 27, 2024
 *      Author: 91626
 */

#ifndef INC_STM32F407XX_RCC_DRIVER_H_
#define INC_STM32F407XX_RCC_DRIVER_H_

#include "stm32f407xx.h"
/*
 * peripheral register definition structure for RCC
 */
typedef struct
{
  __vo uint32_t CR;
  __vo uint32_t PLLCFGR;
  __vo uint32_t CFGR;
  __vo uint32_t CIR;
  __vo uint32_t AHB1RSTR;
  __vo uint32_t AHB2RSTR;
  __vo uint32_t AHB3RSTR;
  uint32_t      RESERVED0;
  __vo uint32_t APB1RSTR;
  __vo uint32_t APB2RSTR;
  uint32_t      RESERVED1[2];
  __vo uint32_t AHB1ENR;
  __vo uint32_t AHB2ENR;
  __vo uint32_t AHB3ENR;
  uint32_t      RESERVED2;
  __vo uint32_t APB1ENR;
  __vo uint32_t APB2ENR;
  uint32_t      RESERVED3[2];
  __vo uint32_t AHB1LPENR;
  __vo uint32_t AHB2LPENR;
  __vo uint32_t AHB3LPENR;
  uint32_t      RESERVED4;
  __vo uint32_t APB1LPENR;
  __vo uint32_t APB2LPENR;
  uint32_t      RESERVED5[2];
  __vo uint32_t BDCR;
  __vo uint32_t CSR;
  uint32_t      RESERVED6[2];
  __vo uint32_t SSCGR;
  __vo uint32_t PLLI2SCFGR;
  __vo uint32_t PLLSAICFGR;
  __vo uint32_t DCKCFGR;
  __vo uint32_t DCKCFGR2;

} RCC_RegDef_t;

//This returns the APB1 clock value
uint32_t RCC_GetPCLK1Value(void);

//This returns the APB2 clock value
uint32_t RCC_GetPCLK2Value(void);


uint32_t  RCC_GetPLLOutputClock(void);
#endif /* INC_STM32F407XX_RCC_DRIVER_H_ */
