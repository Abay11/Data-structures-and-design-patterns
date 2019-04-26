#include <iostream>
#include <vector>
#include <ctime>

#include "allheaders.h"

using namespace std;

int main()
{

 std::srand(std::time(nullptr)); // use current time as seed for random generator
 int DEFINED_ENVIROMENT = std::rand() % 3;

 int const KDE_ENV  = 0;
 int const GNOME_ENV = 1;
 int const CINNAMON_ENV = 2;

 ACreator* creator = nullptr;

 switch (DEFINED_ENVIROMENT)
	{
	case KDE_ENV:
	 {
		creator = new KDECreator;
		break;
	 }

	case GNOME_ENV:
	 {
		creator = new GNOMECreator;
		break;
	 }

	case CINNAMON_ENV:
	 {
		creator = new CinnamonCreator;
		break;
	 }
	}

 AEnviroment* env = creator->create();

 env->draw();

 env->run();

 env->shut_down();

 std::cout << std::endl;

 delete env;
 delete creator;

 return 0;
}
