#include "cond.h"
#include <iostream>


Cond::Cond()
{

}

Cond::Cond( std::string firm, std::string model, int ves, int temp, std::string regum, int god) : ButUstr(firm, model, ves, temp, regum, god)
{
}

void Cond::control(int temp, std::string regum) {
	bool offer = true;
	if (temp < 10) {
		cout << "Переохлождение";
		cout << "Темп: false" << temp<< endl;
		offer = false;
		cout << "Контроль:" << offer << endl;
		cout << "Включаем обогреватель" << endl;
		regum = "Obogrev";
		cout << "Включен режим обогрева" << endl;
		temp += 10;
		temp_ = temp;
		cout << "Темп: " << temp << endl;
	}
	else
	{
		offer = true;
		cout << "Контроль: true" << offer << endl;
		cout << "Темп: " << temp << endl;
	}
}


void Cond::printInfo() 
{
	std::cout << "model:" << model_ << std::endl;
	std::cout << "firm:" << firm_ << std::endl;
	std::cout << "regum:" << regum_ << std::endl;
	std::cout << "temp:" << temp_ << std::endl;
	std::cout << "god:" << god_ << std::endl;
	std::cout << "ves:" << ves_ << std::endl;
}

