/*
   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#include <stdio.h>

#include "esp_system.h"

#include "driver/gpio.h"

#include "freertos/FreeRTOS.h"

#include "freertos/task.h"



/******************************************************************************
 * FunctionName : app_main
 * Description  : entry of user application, init user function here
 * Parameters   : none
 * Returns      : none
*******************************************************************************/


float convertir(float montant, int devise);
void afficher_reel (float f);
void test();

int new_devise =0;
volatile int n = 0;
void app_main(void)
{
    //LED 1
    gpio_config_t c ;
    c.mode=GPIO_MODE_OUTPUT;
    c.pin_bit_mask = GPIO_Pin_4;
    c.intr_type = GPIO_INTR_DISABLE;
    c.pull_down_en = c.pull_up_en = 0;
    gpio_config(&c);




     gpio_config_t button ;
    button.mode=GPIO_MODE_INPUT;
    button.pin_bit_mask = GPIO_Pin_14|GPIO_Pin_12|GPIO_Pin_13;
    button.intr_type = GPIO_INTR_NEGEDGE;
    button.pull_down_en = button.pull_up_en = 0;
    gpio_config(&button);

    /* 

    
    gpio_set_level(14,0);


    int n = gpio_get_level(GPIO_NUM_14);
    printf("%d",n);
    printf("\n");
 
    */


    gpio_install_isr_service(0) ;
    gpio_isr_handler_add(13, test, 1);
    //gpio_isr_handler_remove(13) ;
   
    //float result = convertir(100,1);

    
    while (new_devise == 1){
        convertir(500,1);
    }

}


void test(devise){

new_devise = devise;


}









void afficher_reel (float f)
{
    int entier = (int)(f);
    int decimal = (int)((f-entier) * 10000);
    printf("%d.%d",entier,decimal);
}
float convertir(float montant, int devise)
{
    float yen = 800;
    float dollars = 1.14f;
    float livres = 0.87f;

    float result = 0;

    if ( devise == 1 )
    {
        result  = montant * dollars ;       
    } else if ( devise == 2)
    {
        result = montant * yen;
    } else if (devise == 3)
    {
        result = montant * livres;
    }
    printf("hellow world!");
    afficher_reel(result);
    printf("\n");
return result;
}
