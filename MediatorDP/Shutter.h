#pragma once
#include "InnerModule.h"

class Shutter : public InnerModule
{
	int speed;

public:
	Shutter(Mediator *mediator, int mid);
	virtual void SetValue(int value);
	void AlramChanged(int iris);
};
