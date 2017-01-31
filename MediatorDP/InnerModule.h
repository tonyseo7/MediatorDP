#pragma once
#include "Mediator.h"

class InnerModule
{
	Mediator *mediator;
	const int mid;

public:
	InnerModule(Mediator *mediator, int mid);
	void Changed(int value);
	virtual void SetValue(int value) = 0;
	int GetMid()const;
	virtual void AlramChanged(int value) = 0;
};