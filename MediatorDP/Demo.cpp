#include "Camera.h"

void main()
{
	Camera *camera = new Camera();
	camera->ChangeMode(0);
	cout << "1" << endl;
	camera->SetShutterSpeed(3);
	cout << "2" << endl;
	camera->SetIris(3);


	camera->ChangeMode(1);
	cout << "3" << endl;
	camera->SetShutterSpeed(4);
	cout << "4" << endl;
	camera->SetIris(4);

	delete camera;
}