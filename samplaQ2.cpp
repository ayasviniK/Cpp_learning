#include<iostream.h>

using namespace std;

float bsalary, ot, finalSalary;
//char name[20];
string name;

void inputData()
{
	cout<< "Enter the name - ";
	cin >> name ;
	cout<< "Enter basic salary - ";
	cin >> bsalary ;
	cout<< "Enter OT hours - ";
	cin >> ot ;
}
void calculate()
{
	if(bsalary>=100000)
	{
		finalSalary= bsalary+(ot*1000);
	}
	else if(bsalary>=50000)
	{
		finalSalary= bsalary+(ot*500);
	}
	else if(bsalary>=25000)
	{
		finalSalary= bsalary+(ot*350);
	}
	else
	{
		finalSalary= bsalary+(ot*100);
	}
}
void display()
{
	//cout<< "Employee name - " << name[20] << endl;
	cout<< "Employee name - " << name << endl;
	cout<< "Basic salary = " << bsalary << endl;
	cout<< "OT hours " << ot << endl;
	cout<< "Final salary = " << finalSalary << endl;
}
int main()
{
	inputData();
	calculate();
	display();
	return 0;
}
