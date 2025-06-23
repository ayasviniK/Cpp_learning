#include<iostream.h>
int main()
{
	int count = 1, num=0 , tot=0;
	while(count<=5)
	{
		cout << "Enter a number -";
		cin>> num;
		
		tot = tot+ num;
		
		count=count+1;
	}
	cout<< "Total is - " << tot << "\n";
	return 0;
}