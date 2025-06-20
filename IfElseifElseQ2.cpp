#include<iostream>
int main()
{
	float price,tot;
	int code,qty;
	
	cout <<"Enter the product code and price- ";
	cin >> code >> price;
	cout <<"Enter the quantity- ";
	cin >> qty;
	
	if(code = 1)
	{
		tot=(price*3/100);
		cout<< "Total Amount- "<< ((price-tot)*qty) <<"Rs \n \n";
	}
	else if (code = 2)
	{
		tot=(price*5/100);
		cout<< "Total Amount "<< ((price-tot)*qty)<< "Rs \n \n";
	}
	else
	{
		cout <<"invalied input\n \n";
	}
	return 0;
}