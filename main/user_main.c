/*
   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <stdio.h>

#include "esp_system.h"

#include "driver/gpio.h"



/******************************************************************************
 * FunctionName : app_main
 * Description  : entry of user application, init user function here
 * Parameters   : none
 * Returns      : none
*******************************************************************************/


float convertir(float montant, int devise);

void app_main(void)
{
    
    gpio_config_t c ;
    c.mode=GPIO_MODE_OUTPUT;
    c.pin_bit_mask = GPIO_Pin_4;
    c.intr_type = GPIO_INTR_DISABLE;
    c.pull_down_en = c.pull_up_en = 0;
    gpio_config(&c);

    //printf("SDK version:%s\n", esp_get_idf_version());
    //printf("hello world!\n");


    //int n = gpio_get_level(GPIO_NUM_0);
    //printf(n,"\n");
    //gpio_set_level(4,1);
   
    float result = convertir(500,1);
    printf("hellow world!");
    printf("%f\n", result);

}

float convertir(float montant, int devise)
{
    float yen = 800;
    float dollars = 1.14f;
    float livres = 0.87f;

float result = 0;

    if ( devise == 1 )
    {
        result  = montant * yen ;       
    } else if ( devise == 2)
    {
        result = montant * dollars;
    } else if (devise == 3)
    {
        result = montant * livres;
    }
    return result;

}
