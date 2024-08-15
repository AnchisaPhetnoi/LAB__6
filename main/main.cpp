#include <stdio.h>
#include "SevenSegment.h"

SevenSegment s1(0) ;
SevenSegment s2(4) ;

extern "C" void app_main(void)
{
    while(1)
    {
        s1.HardwareTest();
        vTaskDelay(500/portTICK_PERIOD_MS);
        s1.DisplayBlank();
        vTaskDelay(500/portTICK_PERIOD_MS);
        s2.HardwareTest();
        vTaskDelay(500/portTICK_PERIOD_MS);
        s2.DisplayBlank();
        vTaskDelay(500/portTICK_PERIOD_MS);
    } 
}