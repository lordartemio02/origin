#include "Obogrev.h"
#include <sstream>
#include <iostream>
#include <string>

Obogrev::Obogrev()
{
}


Obogrev::Obogrev(std::string firm,std::string model, int ves, int temp, std::string regum, int god) : ButUstr (firm,model,ves,temp,regum,god)
{

}

void Obogrev::control(int temp,std::string regum){
	if (temp > 45) {
		cout << "Peregrev" << endl;
		offer = false;
		cout << "Контроль: false" << endl;
		cout << "Включаем кондиционер" << endl;
		regum = "Ohlagd" << endl;
		temp -= 10;
		temp_ = temp;
		cout << "Темп: " << temp << endl;
	}
	else
	{
		offer = true;
		cout << "Контроль: true" << endl;
		cout << "Темп: " << temp << endl;
	}
}

void Obogrev::printInfo()
{
	std::cout << "model:" << model_ << std::endl;
	std::cout << "firm:" << firm_ << std::endl;
	std::cout << "regum:" << regum_ << std::endl;
	std::cout << "temp:" << temp_ << std::endl;
	std::cout << "god:" << god_ << std::endl;
	std::cout << "ves:" << ves_ << std::endl;
}


