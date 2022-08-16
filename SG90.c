#include "SG90.h"

void SG90_Duty(unsigned int duty){
    
    PWM11_DutyCycleSet(duty);
    PWM11_LoadBufferSet();
     
}
