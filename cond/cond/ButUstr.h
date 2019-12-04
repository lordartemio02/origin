#pragma once
#include <string>
#include <fstream>
class ButUstr
{	
public:
	ButUstr();
	~ButUstr();
	ButUstr(std::string firm,std::string model, int ves, int temp, std::string regum, int god);
	//void setFirm(const std::string firm); // сеттеры
	//void setModel(const std::string model);
	//void setRegum(const std::string regum);
	//void setVes(const int ves);
	//void setTemp(int temp);
	//void setGod(const int god);
	//void settempObh_(const int tempObh);
	//void setcount_(const int count);
	//virtual void printInfo();
	std::string firm_, model_, regum_;
	int ves_, temp_, god_, tempObh_, count_;
};

