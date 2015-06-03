#ifndef LedMatrixAnimations_H
#define LedMatrixAnimations_H

#include <Arduino.h>
//#include <WConstants.h>
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

	LedControl LM = LedControl(11, 13, 12, 1);

};
#endif