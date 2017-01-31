#include "Iris.h"


Iris::Iris(Mediator *mediator, int mid) :InnerModule(mediator, mid)
{
	iris = 0;
}

void Iris::SetValue(int value)
{
	this->iris = value;
	cout << "조리개 F값: " << iris << endl;
	Changed(iris);
}

void Iris::AlramChanged(int speed)
{
	cout << "셔터 스피드 변경 통보 받음" << endl;
	SetValue(10 - speed);
}