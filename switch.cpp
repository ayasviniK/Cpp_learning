#include<iostream.h>
int main()
{
	char value;
	cout <<"Enter a char value- ";
	cin >> value;
	
	switch(value)
	{
		case 'a,A':
		cout <<"You have entered a\n";
		break;
		
		case 'b,B':
		cout<<"You have entered b\n";
		break;
		
		case 'c,C':
		cout<<"You have entered c\n";
		break;
		
		default:
		cout<<"Invalied input!!\n";
		
		
	}
	return 0;
}