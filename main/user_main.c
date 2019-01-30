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




void app_main(void)
{
    
    gpio_config_t c ;
    c.mode=GPIO_MODE_OUTPUT;
    c.pin_bit_mask = GPIO_Pin_4;
    c.intr_type = GPIO_INTR_DISABLE;
    c.pull_down_en = c.pull_up_en = 0;
    gpio_config(&c);

    //printf("SDK version:%s\n", esp_get_idf_version());
    printf("hello world!\n");


    int n = gpio_get_level(GPIO_NUM_0);
    printf(n,"\n");
    gpio_set_level(4,1);
   

}

