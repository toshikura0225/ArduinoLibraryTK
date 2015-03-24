#include "DigitalInputPin.h"

DigitalInputPin::DigitalInputPin(int argNumber)
{
	(*this).init(argNumber,10);
}

DigitalInputPin::DigitalInputPin(int argNumber, int argKeepingConstant)
{
	(*this).init(argNumber, argKeepingConstant);
}

void DigitalInputPin::init(int argNumber, int argKeepingConstant)
{
	(*this).pinNumber = argNumber;
	(*this).keepingConstant = 10;
	pinMode(pinNumber, INPUT_PULLUP);
	(*this).keepingCount = 0;
	(*this).keepingState = digitalRead((*this).pinNumber);
	(*this).preState = (*this).keepingState;		// 前回の状態
}

int DigitalInputPin::GetState()
{
  int currentState = digitalRead((*this).pinNumber);	// 今回測定分の状態
  
  // 状態が連続して安定した回数をインクリメント
  if ((*this).preState == currentState)
  {
      (*this).keepingCount++;

      // 閾値を超えたら状態変更とする
      if ((*this).keepingCount >=(*this).keepingConstant)
      {
			(*this).keepingState = currentState;
			(*this).keepingCount = (*this).keepingConstant;
      }
  }
  else
  {
	  (*this).keepingCount = 0;
  }

  
  (*this).preState = currentState;
  
  return keepingState;
}

// ピンの状態が変更となったら変更になった状態を返す。
// 変更がない場合は-1を返す
int DigitalInputPin::IsShifted()
{
	int currentState = (*this).GetState();
	int retValue = -1;
	if ((*this).preState != currentState)
	{
		retValue = currentState;
	}
	(*this).preState = currentState;
	return retValue;
}
