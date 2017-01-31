#pragma once
#include "common.h"

class Mediator
{
public:
	virtual void Change(int mid, int value) = 0;
};
