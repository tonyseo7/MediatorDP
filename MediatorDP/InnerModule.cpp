#include "InnerModule.h"


InnerModule::InnerModule(Mediator *mediator, int mid) :mid(mid), mediator(mediator)
{

}

void InnerModule::Changed(int value)
{
	mediator->Change(mid, value);
}

int InnerModule::GetMid()const
{
	return mid;
}