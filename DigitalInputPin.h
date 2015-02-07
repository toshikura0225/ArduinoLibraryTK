#ifndef DigitalInputPin_h
#define DigitalInputPin_h


class DigitalInputPin
{
	public:
		DigitalInputPin(int pinNumber);
		int PinNumber;
		int IsShifted();
		int IsShifted(int keepingTimer);
		
	protected:
		
};

#endif
