#include "DigitalInputPin.h"

#define KEEPING_TIMER 100

DigitalInputPin::DigitalInputPin(int argNumber)
{
	(*this).pinNumber = argNumber;
}

int DigitalInputPin::GetState()
{
  return digitalRead((*this).pinNumber);
}
int DigitalInputPin::IsShifted()
{
	return HIGH;
}

int DigitalInputPin::IsShifted(int keepingTimer)
{
	return HIGH;
}
