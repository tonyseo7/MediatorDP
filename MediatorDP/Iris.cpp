#include "Iris.h"


Iris::Iris(Mediator *mediator, int mid) :InnerModule(mediator, mid)
{
	iris = 0;
}

void Iris::SetValue(int value)
{
	this->iris = value;
	cout << "������ F��: " << iris << endl;
	Changed(iris);
}

void Iris::AlramChanged(int speed)
{
	cout << "���� ���ǵ� ���� �뺸 ����" << endl;
	SetValue(10 - speed);
}