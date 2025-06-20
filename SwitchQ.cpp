#include<iostream.h>
int main()
{
	float num1,num2;
	int symbol;
	
	cout <<"Enter the first number- ";
	cin >> num1;
	cout <<"Enter the second number- ";
	cin >> num2;
	cout << "Enter \n1 for add\n2 for substract\n3 for multiply \n4 for divide- ";
	cin >> symbol;
	
	switch(symbol)
	{
		case 1:
		cout<<"Result= "<<(num1+num2)<<"\n\n";
		break;
		
		case 2:
		cout<<"Result= "<<(num1-num2)<<"\n\n";
		break;
		
		case 3:
		cout<<"Result= "<<(num1*num2)<<"\n\n";
		break;
		
		case 4:
		cout<<"Result= "<<(num1/num2)<<"\n\n";
		break;
		
		default:
		cout<<"Invalied input!!\n\n";
		
		
	}
	return 0;
}