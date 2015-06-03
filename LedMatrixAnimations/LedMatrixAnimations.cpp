#include "LedMatrixAnimations.h"
#include "LedControl.h"

/*const byte MAX_DEVICES	1
const byte CLK_PIN		13
const byte DATA_PIN		11
const byte CS_PIN		12*/

LedMatrixAnimations::LedMatrixAnimations(){
	LedControl LM = LedControl(11, 13, 12, 1);
}

LedMatrixAnimations::~LedMatrixAnimations(){
	//Nothing to destruct
}

void LedMatrixAnimations::lookUp(){

  LM.setLed(0, 2, 3, false);
  LM.setLed(0, 2, 4, false);
  LM.setLed(0, 3, 3, false);
  LM.setLed(0, 3, 4, false);

  LM.setLed(0, 1, 3, true);
  LM.setLed(0, 1, 4, true);
  LM.setLed(0, 2, 2, true);
  LM.setLed(0, 2, 5, true);
  LM.setLed(0, 3, 1, true);
  LM.setLed(0, 3, 2, true);
  LM.setLed(0, 3, 5, true);
  LM.setLed(0, 3, 6, true);
  LM.setLed(0, 4, 1, true);
  LM.setLed(0, 4, 2, true);
  LM.setLed(0, 4, 3, true);
  LM.setLed(0, 4, 4, true);
  LM.setLed(0, 4, 5, true);
  LM.setLed(0, 4, 6, true);
  LM.setLed(0, 5, 2, true);
  LM.setLed(0, 5, 3, true);
  LM.setLed(0, 5, 4, true);
  LM.setLed(0, 5, 5, true);
  LM.setLed(0, 6, 3, true);
  LM.setLed(0, 6, 4, true);

}

void LedMatrixAnimations::lookDown(){

  LM.setLed(0, 3, 3, false);
  LM.setLed(0, 3, 4, false);
  LM.setLed(0, 5, 3, false);
  LM.setLed(0, 5, 4, false);

  LM.setLed(0, 1, 3, true);
  LM.setLed(0, 1, 4, true);
  LM.setLed(0, 2, 2, true);
  LM.setLed(0, 2, 3, true);
  LM.setLed(0, 2, 4, true);
  LM.setLed(0, 2, 5, true);
  LM.setLed(0, 3, 1, true);
  LM.setLed(0, 3, 2, true);
  LM.setLed(0, 3, 3, true);
  LM.setLed(0, 3, 4, true);
  LM.setLed(0, 3, 5, true);
  LM.setLed(0, 3, 6, true);
  LM.setLed(0, 4, 1, true);
  LM.setLed(0, 4, 2, true);
  LM.setLed(0, 4, 5, true);
  LM.setLed(0, 4, 6, true);
  LM.setLed(0, 5, 2, true);
  LM.setLed(0, 5, 5, true);
  LM.setLed(0, 6, 3, true);
  LM.setLed(0, 6, 4, true);

}

void LedMatrixAnimations::lookLeft(){
  
  LM.setLed(0, 3, 4, false);
  LM.setLed(0, 3, 5, false);
  LM.setLed(0, 4, 4, false);
  LM.setLed(0, 4, 5, false);

  LM.setLed(0, 1, 3, true);
  LM.setLed(0, 1, 4, true);
  LM.setLed(0, 2, 2, true);
  LM.setLed(0, 2, 3, true);
  LM.setLed(0, 2, 4, true);
  LM.setLed(0, 2, 5, true);
  LM.setLed(0, 3, 1, true);
  LM.setLed(0, 3, 2, true);
  LM.setLed(0, 3, 3, true);
  LM.setLed(0, 3, 6, true);
  LM.setLed(0, 4, 1, true);
  LM.setLed(0, 4, 2, true);
  LM.setLed(0, 4, 3, true);
  LM.setLed(0, 4, 6, true);
  LM.setLed(0, 5, 2, true);
  LM.setLed(0, 5, 3, true);
  LM.setLed(0, 5, 4, true);
  LM.setLed(0, 5, 5, true);
  LM.setLed(0, 6, 3, true);
  LM.setLed(0, 6, 4, true);

}

void LedMatrixAnimations::lookRight(){
  
  LM.setLed(0, 3, 2, false);
  LM.setLed(0, 3, 3, false);
  LM.setLed(0, 4, 2, false);
  LM.setLed(0, 4, 3, false);

  LM.setLed(0, 1, 3, true);
  LM.setLed(0, 1, 4, true);
  LM.setLed(0, 2, 2, true);
  LM.setLed(0, 2, 3, true);
  LM.setLed(0, 2, 4, true);
  LM.setLed(0, 2, 5, true);
  LM.setLed(0, 3, 1, true);
  LM.setLed(0, 3, 4, true);
  LM.setLed(0, 3, 5, true);
  LM.setLed(0, 3, 6, true);
  LM.setLed(0, 4, 1, true);
  LM.setLed(0, 4, 4, true);
  LM.setLed(0, 4, 5, true);
  LM.setLed(0, 4, 6, true);
  LM.setLed(0, 5, 2, true);
  LM.setLed(0, 5, 3, true);
  LM.setLed(0, 5, 4, true);
  LM.setLed(0, 5, 5, true);
  LM.setLed(0, 6, 3, true);
  LM.setLed(0, 6, 4, true);
}

void LedMatrixAnimations::lookCenter(){

  LM.setLed(0, 3, 3, false);
  LM.setLed(0, 3, 4, false);
  LM.setLed(0, 4, 3, false);
  LM.setLed(0, 4, 4, false);

  LM.setLed(0, 1, 3, true);
  LM.setLed(0, 1, 4, true);
  LM.setLed(0, 2, 2, true);
  LM.setLed(0, 2, 3, true);
  LM.setLed(0, 2, 4, true);
  LM.setLed(0, 2, 5, true);
  LM.setLed(0, 3, 1, true);
  LM.setLed(0, 3, 2, true);
  LM.setLed(0, 3, 5, true);
  LM.setLed(0, 3, 6, true);
  LM.setLed(0, 4, 1, true);
  LM.setLed(0, 4, 2, true);
  LM.setLed(0, 4, 5, true);
  LM.setLed(0, 4, 6, true);
  LM.setLed(0, 5, 2, true);
  LM.setLed(0, 5, 3, true);
  LM.setLed(0, 5, 4, true);
  LM.setLed(0, 5, 5, true);
  LM.setLed(0, 6, 3, true);
  LM.setLed(0, 6, 4, true);

}

void LedMatrixAnimations::fullBlink(int timeClosed, int delayBlink){
    blinkClose(delayBlink);
    delay(timeClosed);
    blinkOpen(delayBlink); 
}
void LedMatrixAnimations::blinkClose(int delayBlink){
  LM.setLed(0,1,3,false);
  LM.setLed(0,1,4,false);
  LM.setLed(0,6,3,false);
  LM.setLed(0,6,4,false);
  
  //delay(delayBlink);

  LM.setLed(0,2,2,false);
  LM.setLed(0,2,3,false);
  LM.setLed(0,2,4,false);
  LM.setLed(0,2,5,false);
  
  LM.setLed(0,5,2,false);
  LM.setLed(0,5,3,false);
  LM.setLed(0,5,4,false);
  LM.setLed(0,5,5,false);

  //delay(delayBlink);

  LM.setLed(0,3,1,false);
  LM.setLed(0,3,2,false);
  LM.setLed(0,3,5,false);
  LM.setLed(0,3,6,false);

  LM.setLed(0,4,3,true);
  LM.setLed(0,4,4,true);

  delay(delayBlink*3);	
}

void LedMatrixAnimations::blinkOpen(int delayBlink){

  LM.setLed(0,4,3,false);
  LM.setLed(0,4,4,false);

  LM.setLed(0,3,1,true);
  LM.setLed(0,3,2,true);
  LM.setLed(0,3,5,true);
  LM.setLed(0,3,6,true);


  //delay(delayBlink);

  LM.setLed(0,2,2,true);
  LM.setLed(0,2,3,true);
  LM.setLed(0,2,4,true);
  LM.setLed(0,2,5,true);
  
  LM.setLed(0,5,2,true);
  LM.setLed(0,5,3,true);
  LM.setLed(0,5,4,true);
  LM.setLed(0,5,5,true);

  //delay(delayBlink);

  LM.setLed(0,1,3,true);
  LM.setLed(0,1,4,true);
  LM.setLed(0,6,3,true);
  LM.setLed(0,6,4,true);
  delay(delayBlink);
}