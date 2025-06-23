#include<iostream.h>
int main()
{
	char type;
	float num=0,quantity,tot=0;
	cout <<"insert item type- ";
	cin >> type;
	cout <<"Insert item number and quantity- ";
	cin >> num>> quantity;
	
	if(type = 'A')
	{
		if(num == 1)
		{
			tot= quantity*500;
			cout << "Total amount- " << tot <<"Rs\n \n";
		}
		else if (num==2)
		{
			tot= quantity*700;
			cout << "Total amount- " << tot <<"Rs\n \n";
		}
		else
		{
		cout << "Invalied item number\n \n";
	}
	}
	else if(type = 'B')
	{
		if(num == 1)
		{
			tot= quantity*1000;
			cout << "Total amount- " << tot <<"Rs\n \n";
		}
		else if(num==2)
		{
			tot= quantity*1500;
			cout << "Total amount- " << tot <<"Rs\n \n";
		}
		else
		{
		cout << "Invalied item number\n \n";
	}
		
	}
	else
	{
		cout << "Invalied item type\n \n";
	}
	
	return 0;
}