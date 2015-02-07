#include "DigitalInputPin.h"

#define KEEPING_TIMER 100

DigitalInputPin::DigitalInputPin(int pinNumber)
{
	DigitalInputPinNumber = pinNumber;
}

int DigitalInputPin::GetState()
{
	return HIGH;
}
int DigitalInputPin::IsShifted()
{
	return HIGH;
}

int DigitalInputPin::IsShifted(int keepingTimer)
{
	return HIGH;
}
