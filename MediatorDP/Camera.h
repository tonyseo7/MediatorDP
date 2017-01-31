#pragma once
#include "InnerMediator.h"
#include "Iris.h"
#include "Shutter.h"

class Camera
{
	InnerMediator *mediator;
	InnerModule *modules[2];

public:
	Camera(void);
	~Camera(void);

	void ChangeMode(int mode);
	void SetIris(int iris);
	void SetShutterSpeed(int speed);

};
