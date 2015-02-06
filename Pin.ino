#include "Pin.h"

#define KEEPING_TIMER 100

Pin::Pin(int pinNumber)
{
	PinNumber = pinNumber;
}


int Pin::IsShifted()
{
	return 1;
}

int Pin::IsShifted(int keepingTimer)
{
	return 1;
}
