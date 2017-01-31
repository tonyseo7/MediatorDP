#include "InnerMediator.h"

void InnerMediator::SetInnerModule(int mid, InnerModule *module)
{
	modules[mid] = module;
}
void InnerMediator::ChangeMode(int mode)
{
	this->mode = mode;
}


void InnerMediator::Change(int mid, int value)
{
	if (mode != mid)
	{
		return;
	}

	if (modules[0]->GetMid() == mid)
	{
		modules[1]->AlramChanged(value);
	}
	else
	{
		modules[0]->AlramChanged(value);
	}

}