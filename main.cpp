#include <iostream>
#include <vector>
#include <ctime>

#include "allheaders.h"

using namespace std;

int main()
{

 while(true)
	{

	 std::cout << "Where do you live?:" << std::endl;
	 std::cout << "1 Moscow" << std::endl;
	 std::cout << "2 Kiev" << std::endl;
	 std::cout << "3 Nalchik" << std::endl;
	 std::cout << "0 or else to exit" << std::endl;
	 std::cout << "Enter your answer: ";

	 int choice;
	 std::cin >> choice;
	 std::cout << std::endl;

	 AbstractCook* cook;
	 if(choice == 1)
		cook = new RussianCook;
	 else if(choice == 2)
		cook = new UkrainianCook;
	 else if(choice == 3)
		cook = new CaucasianCook;
	 else
		break;

	 std::cout << "What borsch do you prefer?:" << std::endl;
	 std::cout << "1 to select red borsch!" << std::endl;
	 std::cout << "2 to select green borsch!" << std::endl;
	 std::cout << "0 or else to exit..." << std::endl;
	 std::cout << "Enter your choice: ";

	 std::cin >> choice;
	 std::cout << std::endl;

	 Borsches type;
	 if(choice == 1) type = Borsches::RED;
	 else if(choice == 2) type = Borsches::GREEN;
	 else break;

	 AbstractBorsch* borsch = cook->createBorsch(type);

	 borsch->prepare();

	 std::cout << cook->getCookName() << " have prepare to you " << borsch->getName() << std::endl;

	 borsch->serve();
	 std::cout << "Enjoy your borsch!" << std::endl;
	 borsch->eat();

	 std::cout << "Thanks for your order! Bye!" << std::endl;

	 std::cout << std::endl;
	 std::cout << std::endl;
	}

 return 0;
}
