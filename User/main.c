/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 *
 * @file        main.c
 * @brief       The main C file.
 *              
 * @par         Project
 *              MG32x02z
 * @version     V1.00
 * @date        2020/10/12
 * @author      Megawin Software Center
 * @copyright   Copyright (c) 2017 MegaWin Technology Co., Ltd.
 *              All rights reserved.
 *
 *******************************************************************************
 * @par Disclaimer
 * The Demo software is provided "AS IS" without any warranty, either
 * expressed or implied, including, but not limited to, the implied warranties
 * of merchantability and fitness for a particular purpose. The author will
 * not be liable for any special, incidental, consequential or indirect
 * damages due to loss of data or any other reason.
 * These statements agree with the world wide and local dictated laws about
 * authorship and violence against these laws.
 *******************************************************************************
 */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "RTE_Components.h"
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* External function prototypes ----------------------------------------------*/
extern void ChipInit(void);

/* USER CODE BEGIN External function prototypes */

/* USER CODE END External function prototypes */

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Private includes */

/* USER CODE END Private includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN Private typedef */

/* USER CODE END Private typedef */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN Private define */

/* USER CODE END Private define */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN Private macro */

/* USER CODE END Private macro */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Private variables */

/* USER CODE END Private variables */

/* Private function prototypes -----------------------------------------------*/

/* USER CODE BEGIN Private function prototypes */

/* USER CODE END Private function prototypes */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
 *******************************************************************************
 * @brief  The application entry point.
 * @retval int
 *******************************************************************************
 */
int main(void)
{
    /* USER CODE BEGIN 1 */

    /* USER CODE END 1 */

    /* MCU Configuration--------------------------------------------------------*/

    /* Reset of all peripherals */
    /* Chip configure with use Wizard */
    ChipInit();

    /* USER CODE BEGIN Init */

    /* USER CODE END Init */

    /* Initializes the Systick. */
    MID_Init();

    /* USER CODE BEGIN SysInit */

    /* USER CODE END SysInit */

    /* Initialize all configured peripherals */

    /* USER CODE BEGIN 2 */

    /* USER CODE END 2 */

    /* Infinite loop */
    /* USER CODE BEGIN WHILE */
    while (1)
    {
        /* USER CODE END WHILE */

        /* USER CODE BEGIN 3 */


			if(PD0 == 0)
			{
				PE13 =0;
				PE14 =0;
				PE15 =0;
			
			MID_Delay(10);
				
			} 
			
			else if (PD0 ==1) 
			{
				
				PE13 =1;
				PE14= 1;
				PE15 =1;
			
			MID_Delay(10);
				
			}
			
			
    }
    /* USER CODE END 3 */
}



/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
 *******************************************************************************
 * @brief  This function is executed in case of error occurrence.
 * @retval None
 *******************************************************************************
 */
void Error_Handler(void)
{
    /* USER CODE BEGIN Error_Handler_Debug */
    /* User can add his own implementation to report the MID error return state */

    /* USER CODE END Error_Handler_Debug */
}

/************************ (C) COPYRIGHT megawin ****************END OF FILE****/



