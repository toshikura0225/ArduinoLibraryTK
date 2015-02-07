#ifndef DigitalInputPin_h
#define DigitalInputPin_h


class DigitalInputPin
{
	public:
		DigitalInputPin(int pinNumber);
		int GetState();
		int IsShifted();
		int IsShifted(int keepingTimer);
		
	protected:
		int pinNumber;
};

#endif
