#include "RoverArm.h"
extern TIM_HandleTypeDef htim1;
RoverMotorDC * MotorDC_1;

void RoverArm_init(void) {
   MotorDC_1 = new RoverMotorDC(&htim1, 1); // explicit constructor
}
void RoverArm_start(void) {
   (*MotorDC_1).setSpeed(200, 2000);
   (*MotorDC_1).setSpeed(400, 2000);
}