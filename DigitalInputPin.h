#ifndef Pin_h
#define Pin_h


class Pin
{
	public:
		Pin(int pinNumber);
		int PinNumber;
		int IsShifted();
		int IsShifted(int keepingTimer);
		
	protected:
		
};

#endif
