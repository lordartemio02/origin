#include <sstream>
#include <iostream>
#include <string>
#include "ButUstr.h"
using namespace std;
ButUstr::ButUstr()
{
}

ButUstr::~ButUstr()
{
}
//ОПисание бытовых устройтсв
ButUstr::ButUstr(std::string firm,std::string model, int ves, int temp, std::string regum, int god)
{
	firm_ = firm;
	model_ = model;
	ves_ = ves;
	temp_ = temp;
	regum_ = regum;
	god_ = god;
}

//void ButUstr::setFirm(const std::string firm)
//{
//	firm_ = firm;
//}
//
//void ButUstr::setModel(const std::string model)
//{
//	model_ = model;
//}
//
//void ButUstr::setRegum(const std::string regum)
//{
//	regum_ = regum;
//}
//void ButUstr::setVes(const int ves)
//{
//	ves_ = ves;
//}
//
//void ButUstr::setTemp(int temp)
//{
//	if (regum_ == "ohlag") {
//		temp_ = temp;
//		tempObh_ += temp;
//		count_++;
//		temp_ = tempObh_ / count_;
//	}
//	else
//	{
//		temp_ = 30;
//	}
//}
//
//void ButUstr::setGod(const int god)
//{
//	god_ = god;
//}
//
//void ButUstr::settempObh_(const int tempObh)
//{
//	tempObh_ = tempObh;
//}
//
//void ButUstr::setcount_(const int count)
//{
//	count_ = count;
//}

//void ButUstr::printInfo()
//{
//	std::cout << "model:" << model_ << std::endl;
//	std::cout << "firm:" << firm_ << std::endl;
//	std::cout << "regum:" << regum_ << std::endl;
//	std::cout << "temp:" << temp_ << std::endl;
//	std::cout << "god:" << god_ << std::endl;
//	std::cout << "ves:" << ves_ << std::endl;
//}




