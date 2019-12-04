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
		cout << "��������������";
		cout << "����: false" << temp<< endl;
		offer = false;
		cout << "��������:" << offer << endl;
		cout << "�������� ������������" << endl;
		regum = "Obogrev";
		cout << "������� ����� ��������" << endl;
		temp += 10;
		temp_ = temp;
		cout << "����: " << temp << endl;
	}
	else
	{
		offer = true;
		cout << "��������: true" << offer << endl;
		cout << "����: " << temp << endl;
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

