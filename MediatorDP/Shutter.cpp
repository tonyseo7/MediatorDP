#include "Shutter.h"

Shutter::Shutter(Mediator *mediator, int mid):InnerModule(mediator, mid)
{
	speed = 10;
}

void Shutter::SetValue(int value)
{
	this->speed = value;
	cout << "���� ���ǵ�:" << speed << endl;
	Changed(speed);
}


void Shutter::AlramChanged(int iris)
{
	cout << "������ F�� ���� �뺸 ����" << endl;
	SetValue(10 - iris);
}