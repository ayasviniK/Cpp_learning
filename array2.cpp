#include<iostream.h>
int main()
{
	int arr[5], count;
	
	for(count=0;count<5;count++)
	{
		cout << "Enter a value -" ;
		cin>> arr[count];
	}
	
	cout << arr[0] << "\n";
	cout << arr[1] << "\n";
	cout << arr[2] << "\n";
	cout << arr[3] << "\n";
	cout << arr[4] << "\n\n";
	
	cout << arr[4] + arr[1] << "\n\n";
	
	return 0;
}