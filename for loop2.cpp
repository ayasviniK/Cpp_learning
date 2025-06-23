#include<iostream.h>
int main()
{
	int count=1;
	
	while(count<=10)
	{
		if(count == 5)
		{
			//break;
			count++;
			continue;
			
		}
		
		cout << count << endl;
		count++;
	}
	
	return 0;
}