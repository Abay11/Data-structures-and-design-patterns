#ifndef BORSCH_H
#define BORSCH_H

#include <string>
#include <iostream>

class AbstractBorsch
{
public:
 virtual void prepare() = 0;

 virtual void serve() = 0;

 virtual void eat() = 0;

 int getSum() { return sum; };
 std::string getName() { return name; };

 protected:
 std::string name;
 int sum;
};

class RussianRedBorsch : public AbstractBorsch
{
public:
 RussianRedBorsch()
 {
	name = "Russian red borsch";
	sum = 200;
 }

 void prepare()
 {
	std::cout << "Russian red borsch is preparing..." << std::endl;
 }

 void serve()
 {
	std::cout << "Russian red borsch have served!" << std::endl;
 }

 void eat()
 {
	std::cout << "Eating russian red borsch..." << std::endl;
 }
};

class RussianGreenBorsch : public AbstractBorsch
{
public:
 RussianGreenBorsch()
 {
	name = "Russian green borsch";
	sum = 200;
 }

 void prepare()
 {
	std::cout << "Russian green borsch is preparing..." << std::endl;
 }

 void serve()
 {
	std::cout << "Russian green borsch have served!" << std::endl;
 }

 void eat()
 {
	std::cout << "Eating russian green borsch..." << std::endl;
 }
};

class UkrainianRedBorsch : public AbstractBorsch
{
public:
 UkrainianRedBorsch()
 {
	name = "Ukrainian red borsch";
	sum = 200;
 }

 void prepare()
 {
	std::cout << "Ukrainian red borsch is preparing..." << std::endl;
 }

 void serve()
 {
	std::cout << "Ukrainian red borsch have served!" << std::endl;
 }

 void eat()
 {
	std::cout << "Eating ukrainian red borsch..." << std::endl;
 }
};

class UkrainianGreenBorsch : public AbstractBorsch
{
public:
 UkrainianGreenBorsch()
 {
	name = "Ukrainian green borsch";
	sum = 200;
 }

 void prepare()
 {
	std::cout << "Ukrainian green borsch is preparing..." << std::endl;
 }

 void serve()
 {
	std::cout << "Ukrainian green borsch have served!" << std::endl;
 }

 void eat()
 {
	std::cout << "Eating ukrainian green borsch..." << std::endl;
 }
};

class CaucasianRedBorsch : public AbstractBorsch
{
public:
 CaucasianRedBorsch()
 {
	name = "Caucasian red borsch";
	sum = 200;
 }

 void prepare()
 {
	std::cout << "Caucasian red borsch is preparing..." << std::endl;
 }

 void serve()
 {
	std::cout << "Caucasian red borsch have served!" << std::endl;
 }

 void eat()
 {
	std::cout << "Eating caucasian red borsch..." << std::endl;
 }
};

class CaucasianGreenBorsch : public AbstractBorsch
{
public:
 CaucasianGreenBorsch()
 {
	name = "Caucasian green borsch";
	sum = 200;
 }

 void prepare()
 {
	std::cout << "Caucasian green borsch is preparing..." << std::endl;
 }

 void serve()
 {
	std::cout << "Caucasian green borsch have served!" << std::endl;
 }

 void eat()
 {
	std::cout << "Eating caucasian green borsch..." << std::endl;
 }
};

enum class Borsches{RED, GREEN};

class AbstractCook
{
public:
 virtual AbstractBorsch* createBorsch(Borsches type) = 0;

 std::string getCookName() { return cook_name; }

protected:
 std::string cook_name;
};

class RussianCook : public AbstractCook
{
public:
 RussianCook()
 {
	cook_name = "Natasha";
 }

 AbstractBorsch* createBorsch(Borsches type) override
 {
	switch(type)
	 {
	 case Borsches::RED:
		return new RussianRedBorsch();
	 case Borsches::GREEN:
		return new RussianGreenBorsch();
	 }
 }
};

class UkrainianCook : public AbstractCook
{
public:
 UkrainianCook()
 {
	cook_name = "Anastasia";
 }

 AbstractBorsch* createBorsch(Borsches type) override
 {
	switch(type)
	 {
	 case Borsches::RED:
		return new UkrainianRedBorsch();
	 case Borsches::GREEN:
		return new UkrainianGreenBorsch();
	 }
 }
};

class CaucasianCook : public AbstractCook
{
public:
 CaucasianCook()
 {
	cook_name = "Malika";
 }

 AbstractBorsch* createBorsch(Borsches type) override
 {
	switch(type)
	 {
	 case Borsches::RED:
		return new CaucasianRedBorsch();
	 case Borsches::GREEN:
		return new CaucasianGreenBorsch();
	 }
 }
};

#endif // BORSCH_H
