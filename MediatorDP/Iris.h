#pragma once
#include "InnerModule.h"

class Iris : public InnerModule
{
	int iris;

public:
	Iris(Mediator *mediator, int mid);
	virtual void SetValue(int value);
	void AlramChanged(int speed);
};
