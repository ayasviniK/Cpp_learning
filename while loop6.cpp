#include<iostream.h>
int main()
{
	int count = 1, num = 0;
	while(count<=10)
	{
		cout << "Enter a number -";
		cin>> num;
		
		if (num%2==0)
		{
			cout<< num << "\n";
		}
		
		count=count+1;
		
	}
	return 0;
}