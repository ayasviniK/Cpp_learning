#include<iostream.h>
int main()
{
	float price=0,tot=0;
	int qntt;
	char op;
		
	do
	{
		cout << "Price and quantity - ";
		cin>> price>> qntt ;
		
		tot=tot+(price*qntt);
		
		cout << "Do you want to add another item - \n"<< "Enter 'y' to continue 'n' to stop - ";
		cin>> op;
		
	}while (op=='y');
	
	cout << "Total amount is - " << tot << endl;
	
	return 0;
}