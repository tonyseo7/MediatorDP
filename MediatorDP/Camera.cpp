#include "Camera.h"

Camera::Camera(void)
{
	mediator = new InnerMediator();
	modules[0] = new Iris(mediator, 0);
	modules[1] = new Shutter(mediator, 1);

	mediator->SetInnerModule(0, modules[0]);
	mediator->SetInnerModule(1, modules[1]);
	mediator->ChangeMode(0);
}

Camera::~Camera()
{
	delete mediator;
	delete modules[0];
	delete modules[1];
}

void Camera::ChangeMode(int mode)
{
	if ((mode != 0) && (mode != 1))
	{
		return;
	}

	if (mode == 0)
	{
		cout << "*** 조리개 우선 모드 ***" << endl;
	}
	else
	{
		cout << "*** 셔터 스피드 우선 모드 ***" << endl;
	}

	mediator->ChangeMode(mode);

}


void Camera::SetIris(int iris)
{
	modules[0]->SetValue(iris);
}

void Camera::SetShutterSpeed(int speed)
{
	modules[1]->SetValue(speed);
}