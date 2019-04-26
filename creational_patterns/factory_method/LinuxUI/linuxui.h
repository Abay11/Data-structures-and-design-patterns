#ifndef LINUXUI_H
#define LINUXUI_H

#include <string>
#include <iostream>

//abstract product
class AEnviroment
{
public:
 virtual void draw()
 {
	std::cout << "Drawing " << env_name << " enviroment" << std::endl;
 }

 virtual void run()
 {
	std::cout << env_name << " is run" << std::endl;
 }

 virtual void shut_down()
 {
	std::cout << env_name << " is shutting down" << std::endl;
 }

 virtual ~AEnviroment(){};

 protected:
 std::string env_name;
};

//concrete product
class KDE : public AEnviroment
{
public:
 KDE()
 {
	env_name = "KDE";
 }

 ~KDE(){}
};

//concrete product
class GNOME : public AEnviroment
{
public:
 GNOME()
 {
	env_name = "GNOME";
 }

 ~GNOME(){}
};

//concrete product
class Cinnamon: public AEnviroment
{
public:
 Cinnamon()
 {
	env_name = "Cinnamon";
 }

 ~Cinnamon(){}
};

//abstract creator
class ACreator
{
public:
 virtual AEnviroment* create() = 0;
 virtual ~ACreator(){}
};

//concrete creator
class KDECreator : public ACreator
{
public:
 AEnviroment* create()
 {
	return new KDE;
 }
};

//concrete creator
class GNOMECreator : public ACreator
{
public:
 AEnviroment* create()
 {
	return new GNOME;
 }
};

//concrete creator
class CinnamonCreator : public ACreator
{
public:
 AEnviroment* create()
 {
	return new Cinnamon;
 }
};

#endif // LINUXUI_H
