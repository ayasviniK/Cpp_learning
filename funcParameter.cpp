#include <iostream>

/*void calculate(int a, int b, int c)
{
	int tot = 0;
	tot = a + b +c;
	cout << tot << endl;
}

int main()
{
	calculate(10,11,4);
	return 0;
}*/

int no1, no2, no3;
float avg;

void setData(int num1, int num2, int num3)
{
    no1 = num1;
    no2 = num2;
    no3 = num3;
}

void calculateAvg()
{
    avg = (no1 + no2 + no3) / 3.0; // Performing division with a float literal to get a float result
}

void displayAvg()
{
    std::cout << "Average is = " << avg << std::endl;
}

int main()
{
    int num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    setData(num1, num2, num3);
    calculateAvg();
    displayAvg();

    return 0;
}

