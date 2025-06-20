#include<iostream.h>
int main()
{
	int arr[5], count;
	float amount=0 , avg=0, tot=0, above_avg=0;
	
	for(count=0;count<5;count++)
	{
		cout << "Enter the sales amount - " ;
		cin>> arr[count];
		tot=tot+arr[count];
	}
	
	avg = tot/5;
	
	for(count=0;count<5;count++)
	{
		if(arr[count]<avg)
		{
			cout << "Day" << (count+1) << "\n\n";
		}
		else
		{
			above_avg++;
		}
	}
	cout << "Total amount of sales of 10 days= " << tot << "\n";
	cout << "Average amount = " << avg << "\n";
	cout << "Total count of days = " << above_avg << "\n";
	
	return 0;
}