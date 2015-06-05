#include "LedMatrixAnimations.h"
#include "LedControl.h"



LedMatrixAnimations::LedMatrixAnimations(){
  ledMatrix = LedControl(11, 13, 12, 1);
}

LedMatrixAnimations::~LedMatrixAnimations(){
  //Nothing to destruct
}

void LedMatrixAnimations::lookUp(){

  ledMatrix.setLed(0, 2, 3, false);
  ledMatrix.setLed(0, 2, 4, false);
  ledMatrix.setLed(0, 3, 3, false);
  ledMatrix.setLed(0, 3, 4, false);

  ledMatrix.setLed(0, 1, 3, true);
  ledMatrix.setLed(0, 1, 4, true);
  ledMatrix.setLed(0, 2, 2, true);
  ledMatrix.setLed(0, 2, 5, true);
  ledMatrix.setLed(0, 3, 1, true);
  ledMatrix.setLed(0, 3, 2, true);
  ledMatrix.setLed(0, 3, 5, true);
  ledMatrix.setLed(0, 3, 6, true);
  ledMatrix.setLed(0, 4, 1, true);
  ledMatrix.setLed(0, 4, 2, true);
  ledMatrix.setLed(0, 4, 3, true);
  ledMatrix.setLed(0, 4, 4, true);
  ledMatrix.setLed(0, 4, 5, true);
  ledMatrix.setLed(0, 4, 6, true);
  ledMatrix.setLed(0, 5, 2, true);
  ledMatrix.setLed(0, 5, 3, true);
  ledMatrix.setLed(0, 5, 4, true);
  ledMatrix.setLed(0, 5, 5, true);
  ledMatrix.setLed(0, 6, 3, true);
  ledMatrix.setLed(0, 6, 4, true);

}

void LedMatrixAnimations::lookDown(){

  ledMatrix.setLed(0, 3, 3, false);
  ledMatrix.setLed(0, 3, 4, false);
  ledMatrix.setLed(0, 5, 3, false);
  ledMatrix.setLed(0, 5, 4, false);

  ledMatrix.setLed(0, 1, 3, true);
  ledMatrix.setLed(0, 1, 4, true);
  ledMatrix.setLed(0, 2, 2, true);
  ledMatrix.setLed(0, 2, 3, true);
  ledMatrix.setLed(0, 2, 4, true);
  ledMatrix.setLed(0, 2, 5, true);
  ledMatrix.setLed(0, 3, 1, true);
  ledMatrix.setLed(0, 3, 2, true);
  ledMatrix.setLed(0, 3, 3, true);
  ledMatrix.setLed(0, 3, 4, true);
  ledMatrix.setLed(0, 3, 5, true);
  ledMatrix.setLed(0, 3, 6, true);
  ledMatrix.setLed(0, 4, 1, true);
  ledMatrix.setLed(0, 4, 2, true);
  ledMatrix.setLed(0, 4, 5, true);
  ledMatrix.setLed(0, 4, 6, true);
  ledMatrix.setLed(0, 5, 2, true);
  ledMatrix.setLed(0, 5, 5, true);
  ledMatrix.setLed(0, 6, 3, true);
  ledMatrix.setLed(0, 6, 4, true);

}

void LedMatrixAnimations::lookLeft(){
  
  ledMatrix.setLed(0, 3, 4, false);
  ledMatrix.setLed(0, 3, 5, false);
  ledMatrix.setLed(0, 4, 4, false);
  ledMatrix.setLed(0, 4, 5, false);

  ledMatrix.setLed(0, 1, 3, true);
  ledMatrix.setLed(0, 1, 4, true);
  ledMatrix.setLed(0, 2, 2, true);
  ledMatrix.setLed(0, 2, 3, true);
  ledMatrix.setLed(0, 2, 4, true);
  ledMatrix.setLed(0, 2, 5, true);
  ledMatrix.setLed(0, 3, 1, true);
  ledMatrix.setLed(0, 3, 2, true);
  ledMatrix.setLed(0, 3, 3, true);
  ledMatrix.setLed(0, 3, 6, true);
  ledMatrix.setLed(0, 4, 1, true);
  ledMatrix.setLed(0, 4, 2, true);
  ledMatrix.setLed(0, 4, 3, true);
  ledMatrix.setLed(0, 4, 6, true);
  ledMatrix.setLed(0, 5, 2, true);
  ledMatrix.setLed(0, 5, 3, true);
  ledMatrix.setLed(0, 5, 4, true);
  ledMatrix.setLed(0, 5, 5, true);
  ledMatrix.setLed(0, 6, 3, true);
  ledMatrix.setLed(0, 6, 4, true);

}

void LedMatrixAnimations::lookRight(){
  
  ledMatrix.setLed(0, 3, 2, false);
  ledMatrix.setLed(0, 3, 3, false);
  ledMatrix.setLed(0, 4, 2, false);
  ledMatrix.setLed(0, 4, 3, false);

  ledMatrix.setLed(0, 1, 3, true);
  ledMatrix.setLed(0, 1, 4, true);
  ledMatrix.setLed(0, 2, 2, true);
  ledMatrix.setLed(0, 2, 3, true);
  ledMatrix.setLed(0, 2, 4, true);
  ledMatrix.setLed(0, 2, 5, true);
  ledMatrix.setLed(0, 3, 1, true);
  ledMatrix.setLed(0, 3, 4, true);
  ledMatrix.setLed(0, 3, 5, true);
  ledMatrix.setLed(0, 3, 6, true);
  ledMatrix.setLed(0, 4, 1, true);
  ledMatrix.setLed(0, 4, 4, true);
  ledMatrix.setLed(0, 4, 5, true);
  ledMatrix.setLed(0, 4, 6, true);
  ledMatrix.setLed(0, 5, 2, true);
  ledMatrix.setLed(0, 5, 3, true);
  ledMatrix.setLed(0, 5, 4, true);
  ledMatrix.setLed(0, 5, 5, true);
  ledMatrix.setLed(0, 6, 3, true);
  ledMatrix.setLed(0, 6, 4, true);
}

void LedMatrixAnimations::lookCenter(){

  ledMatrix.setLed(0, 3, 3, false);
  ledMatrix.setLed(0, 3, 4, false);
  ledMatrix.setLed(0, 4, 3, false);
  ledMatrix.setLed(0, 4, 4, false);

  ledMatrix.setLed(0, 1, 3, true);
  ledMatrix.setLed(0, 1, 4, true);
  ledMatrix.setLed(0, 2, 2, true);
  ledMatrix.setLed(0, 2, 3, true);
  ledMatrix.setLed(0, 2, 4, true);
  ledMatrix.setLed(0, 2, 5, true);
  ledMatrix.setLed(0, 3, 1, true);
  ledMatrix.setLed(0, 3, 2, true);
  ledMatrix.setLed(0, 3, 5, true);
  ledMatrix.setLed(0, 3, 6, true);
  ledMatrix.setLed(0, 4, 1, true);
  ledMatrix.setLed(0, 4, 2, true);
  ledMatrix.setLed(0, 4, 5, true);
  ledMatrix.setLed(0, 4, 6, true);
  ledMatrix.setLed(0, 5, 2, true);
  ledMatrix.setLed(0, 5, 3, true);
  ledMatrix.setLed(0, 5, 4, true);
  ledMatrix.setLed(0, 5, 5, true);
  ledMatrix.setLed(0, 6, 3, true);
  ledMatrix.setLed(0, 6, 4, true);

}

void LedMatrixAnimations::fullBlink(int timeClosed, int delayBlink){
    blinkClose(delayBlink);
    delay(timeClosed);
    blinkOpen(delayBlink); 
}
void LedMatrixAnimations::blinkClose(int delayBlink){
  ledMatrix.setLed(0,1,3,false);
  ledMatrix.setLed(0,1,4,false);
  ledMatrix.setLed(0,6,3,false);
  ledMatrix.setLed(0,6,4,false);
  
  //delay(delayBlink);

  ledMatrix.setLed(0,2,2,false);
  ledMatrix.setLed(0,2,3,false);
  ledMatrix.setLed(0,2,4,false);
  ledMatrix.setLed(0,2,5,false);
  
  ledMatrix.setLed(0,5,2,false);
  ledMatrix.setLed(0,5,3,false);
  ledMatrix.setLed(0,5,4,false);
  ledMatrix.setLed(0,5,5,false);

  //delay(delayBlink);

  ledMatrix.setLed(0,3,1,false);
  ledMatrix.setLed(0,3,2,false);
  ledMatrix.setLed(0,3,5,false);
  ledMatrix.setLed(0,3,6,false);

  ledMatrix.setLed(0,4,3,true);
  ledMatrix.setLed(0,4,4,true);

  delay(delayBlink*3);  
}

void LedMatrixAnimations::blinkOpen(int delayBlink){

  ledMatrix.setLed(0,4,3,false);
  ledMatrix.setLed(0,4,4,false);

  ledMatrix.setLed(0,3,1,true);
  ledMatrix.setLed(0,3,2,true);
  ledMatrix.setLed(0,3,5,true);
  ledMatrix.setLed(0,3,6,true);


  //delay(delayBlink);

  ledMatrix.setLed(0,2,2,true);
  ledMatrix.setLed(0,2,3,true);
  ledMatrix.setLed(0,2,4,true);
  ledMatrix.setLed(0,2,5,true);
  
  ledMatrix.setLed(0,5,2,true);
  ledMatrix.setLed(0,5,3,true);
  ledMatrix.setLed(0,5,4,true);
  ledMatrix.setLed(0,5,5,true);

  //delay(delayBlink);

  ledMatrix.setLed(0,1,3,true);
  ledMatrix.setLed(0,1,4,true);
  ledMatrix.setLed(0,6,3,true);
  ledMatrix.setLed(0,6,4,true);
  delay(delayBlink);
}