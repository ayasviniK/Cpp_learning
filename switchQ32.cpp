#include<iostream.h>
int main()
{
	int num,pw,tot;
	float value;
	
	cout <<"Enter the coustomer number- ";
	cin >> num;
	cout <<"Enter the password- ";
	cin >> pw;
	
	if((num%2)==0)
	{
		cout<<"total amount"<<(value-(value*10/100))<<"Rs\n Regular coustomer\n";
	}
	else if((num%2)==1)
	{
		cout<<"total amount"<<(value-(value*5/100))<<"Rs\n Non-Regular coustomer\n";
	}
	else
	{
		cout<<"invalied input!!";
	}
		
	return 0;	
	}