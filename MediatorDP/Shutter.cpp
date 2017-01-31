#include "Shutter.h"

Shutter::Shutter(Mediator *mediator, int mid):InnerModule(mediator, mid)
{
	speed = 10;
}

void Shutter::SetValue(int value)
{
	this->speed = value;
	cout << "셔터 스피드:" << speed << endl;
	Changed(speed);
}


void Shutter::AlramChanged(int iris)
{
	cout << "조리개 F값 변경 통보 받음" << endl;
	SetValue(10 - iris);
}