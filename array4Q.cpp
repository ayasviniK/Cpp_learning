#include<iostream.h>
int main()
{
	int ict_marks[10], count;
	
	for(count=0;count<10;count++)
	{
		cout << "Enter the marks - " ;
		cin>> ict_marks[count];
	}
	
	for(count=0;count<10;count++)
	{
		if(ict_marks[count]>50)
		{
			cout << ict_marks[count] << "\n";
		}
		
	}
	
	
	return 0;
}