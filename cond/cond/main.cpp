#include "cond.h"
#include "Obogrev.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	Cond *cond1 = new Cond("colin2", "R3D3", 47, 30, "Ohlagd", 2004);
	Cond *cond2 = new Cond("colin2", "R3D3", 47, 33, "Ohlagd", 2004);
	Obogrev *obogrev3 = new Obogrev("colin2", "R3D3", 47, 34, "nagrev", 2004);
	//cond1->setModel("R2D2");
	//cond1->setRegum("ohlag");
	//cond1->setTemp(32);
	//cond1->setTemp(33);
	//cond1->setTemp(34);
	////cond1->setVes(25);
	//cond1->setVes(3);
	//cond1->setGod(2000);

	IControllable *arr[3];
	arr[0] = cond1;
	arr[1] = cond2;
	arr[2] = obogrev3;

	for (int i = 0; i < 3; i++)
	{
		IControllable* control = dynamic_cast<IControllable*>(arr[i]);

		if (control)
		{
			
			if (cond1->temp_ > 25) {
				cond1->control(9, "Ohlagd");
				cond1->temp_ -= 10;
			}
			else
			{
				cond1->temp_ += 10;
			}
			if (cond1->temp_ < 10) {
				cond1->control(29, "Obogrev");
				obogrev3->temp_ += 10;
			}
			else
			{
				cond1->temp_ += 10;
			}
			cond1->printInfo();
		}

		//obogrev3->printInfo();
	}
	cond1->printInfo();
	cond2->printInfo();
	//arr[2] = obogrev1;

	system("pause");
	//r1.serialize("D:\\Robots\\1.txt");
	//r2.serialize("D:\\Robots\\2.txt");
	//r3.serialize("D:\\Robots\\3.txt");
}