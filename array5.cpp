#include<iostream.h>
int main()
{
	int arr[10], count, avg=0, tot=0;
	
	for(count=0;count<10;count++)
	{
		cout << "Enter the value - " ;
		cin>> arr[count];
		tot=tot+arr[count];
	}
	
	avg = tot/10;
	
	for(count=0;count<10;count++)
	{
		if(arr[count]>avg)
		{
			cout << arr[count] << "\n";
		}
		
	}
	
	return 0;
}