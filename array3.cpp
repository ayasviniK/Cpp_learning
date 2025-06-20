#include <iostream>
using namespace std;
int main()
{
	int arr[10], count;
	
	for(count=0;count<10;count++)
	{
		cout << "Enter a value -" ;
		cin>> arr[count];
	}
	
	for(count=0;count<10;count++)
	{
		cout << arr[count] << "\n";
	}
	
	
	return 0;
}