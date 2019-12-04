#pragma once
#include <string>
#include "ButUstr.h"
#include "IControllable.h"
#include <fstream>
using namespace std;
class Cond : public ButUstr, public IControllable
{
public:
	Cond(); // конструктор
	Cond(std::string firm,std::string model, int ves, int temp, std::string regum, int god); // конструктор с параметрами
	void control(int temp, std::string regum);
	void printInfo();
 // вывод информации о себе

};

// сериализация / десериализация:
//void serialize() const;
//void serialize(const std::string& filename) const;
//void deserialize();
//void deserialize(const std::string& filename);