#include<iostream.h>
int main()
{
	int sub1,sub2,sub3,avg;
	
	cout <<"Enter the marks of subject 1- ";
	cin >> sub1;
	cout <<"Enter the marks of subject 2- ";
	cin >> sub2;
	cout <<"Enter the marks of subject 3- ";
	cin >> sub3;
	
	avg =(sub1+sub2+sub3)/3;
	
	if(avg>=75)
	{
		cout<< "A\n \n";
	}
	else if(avg>=60)
	{
		cout<<"B\n \n";
	}
	else if(avg>=50)
	{
		cout<<"C\n \n";
	}
	else if(avg>=35)
	{
		cout<<"pass!!\n \n";
	}
	else
	{
		cout <<"Fail!!\n \n";
	}
	return 0;
}