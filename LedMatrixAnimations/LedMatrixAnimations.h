#ifndef LedMatrixAnimations_H
#define LedMatrixAnimations_H

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif

#include <LedControl.h>

class LedMatrixAnimations
{

public:
	LedMatrixAnimations();
	~LedMatrixAnimations();
	void lookUp();
	void lookDown();
	void lookLeft();
	void lookRight();
	void lookCenter();
	void fullBlink(int timeClosed, int delayBlink);
	void blinkClose(int delayBlink);
	void blinkOpen(int delayBlink);


	LedControl ledMatrix;
};
#endif