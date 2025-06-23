#include<iostream.h>
int main()
{
	int pin1=0,pin2=0;
	cout <<"Insert both pin numbers- ";
	cin >> pin1>> pin2;
	
	if(pin1 == 123)
	{
		if(pin2 == 789)
		{
			cout <<"You have the access!!\n \n";
		}
		else
		{
			cout <<"pin1 is correct but pin 2 is incorrect!!\n \n";
		}
	}
	else
	{
		cout <<"pin 1 is incorrect\n \n";
	}
	return 0;
}