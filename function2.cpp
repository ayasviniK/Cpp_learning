#include<iostream.h>

int number; // Global variable - both display and main method can access.

void display()
{
	number = 10;
	cout << "Value of number - " << number << endl;
}
int main()
{
	int tot; // Local variable - only main method can access
	return 0;
}