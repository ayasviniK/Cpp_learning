#include<iostream>
int main()
{
	int count = 1, qntt=0;
	float price =0, tot = 0, amount=0;
	
	while(count<=5)
	{
		cout << "Enter the Price and Qunatity -";
		cin>> price>> qntt;
		
		tot= qntt*price;
		cout<< "Price for this product - "<< tot << "\n";
		
		amount=amount+tot;
		
		count=count+1;
	}
	cout<< "Total amount is - " << amount << "\n";
	
	return 0;
}