#include<iostream.h>
int main()
{
	int count = 1;
	float avg=0, num=0 , tot=0;
	
	while(count<=10)
	{
		cout << "Enter a number -";
		cin>> num;
		
		tot = tot+ num;
		
		count=count+1;
	}
	cout<< "Total is - " << tot << "\n";
	cout<< "Average is -" << tot/10 << "\n";
	
	return 0;
}