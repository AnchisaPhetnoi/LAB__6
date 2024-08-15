#include "LED.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
class SevenSegment
{
    int common_pin;
    LED seg_a = LED(16);
    LED seg_b = LED(17);
    LED seg_c = LED(5);
    LED seg_d = LED(18);
    LED seg_e = LED(19);
    LED seg_f = LED(21);
    LED seg_g = LED(22);
    LED common = LED(common_pin);
public:
    SevenSegment(int pin)
    {
        common_pin = pin;
        common = LED(common_pin);
    } 
    void HardwareTest();
    void DisplayBlank();
};
