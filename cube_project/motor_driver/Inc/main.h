/**
  ******************************************************************************
  * File Name          : main.hpp
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2018 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* Includes ------------------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define led1_Pin GPIO_PIN_2
#define led1_GPIO_Port GPIOE
#define led2_Pin GPIO_PIN_3
#define led2_GPIO_Port GPIOE
#define bat_vol_Pin GPIO_PIN_4
#define bat_vol_GPIO_Port GPIOA
#define curr_sen1_Pin GPIO_PIN_5
#define curr_sen1_GPIO_Port GPIOA
#define P_HA_Pin GPIO_PIN_0
#define P_HA_GPIO_Port GPIOB
#define P_HB_Pin GPIO_PIN_1
#define P_HB_GPIO_Port GPIOB
#define P_HC_Pin GPIO_PIN_2
#define P_HC_GPIO_Port GPIOB
#define fault_in_Pin GPIO_PIN_8
#define fault_in_GPIO_Port GPIOD
#define hall1_exti9_Pin GPIO_PIN_9
#define hall1_exti9_GPIO_Port GPIOD
#define hall1_exti9_EXTI_IRQn EXTI9_5_IRQn
#define hall2_exti10_Pin GPIO_PIN_10
#define hall2_exti10_GPIO_Port GPIOD
#define hall2_exti10_EXTI_IRQn EXTI15_10_IRQn
#define hall3_exti11_Pin GPIO_PIN_11
#define hall3_exti11_GPIO_Port GPIOD
#define hall3_exti11_EXTI_IRQn EXTI15_10_IRQn
#define P_LC_Pin GPIO_PIN_14
#define P_LC_GPIO_Port GPIOD
#define octw_in_Pin GPIO_PIN_15
#define octw_in_GPIO_Port GPIOD
#define PWRGD_in_Pin GPIO_PIN_11
#define PWRGD_in_GPIO_Port GPIOA
#define dc_cal_out_Pin GPIO_PIN_0
#define dc_cal_out_GPIO_Port GPIOD
#define gain_in_Pin GPIO_PIN_1
#define gain_in_GPIO_Port GPIOD
#define m_ob_out_Pin GPIO_PIN_2
#define m_ob_out_GPIO_Port GPIOD
#define mpem_out_Pin GPIO_PIN_3
#define mpem_out_GPIO_Port GPIOD
#define P_LA_Pin GPIO_PIN_6
#define P_LA_GPIO_Port GPIOB
#define P_LB_Pin GPIO_PIN_7
#define P_LB_GPIO_Port GPIOB
#define en_gate_Pin GPIO_PIN_8
#define en_gate_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
