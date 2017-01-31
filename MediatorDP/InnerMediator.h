#pragma once
#include "Mediator.h"
#include "InnerModule.h"

class InnerMediator : public Mediator
{
	InnerModule *modules[2];
	int mode;

public:
	void SetInnerModule(int mid, InnerModule *module);
	void ChangeMode(int mode);
	virtual void Change(int mid, int value);
};
