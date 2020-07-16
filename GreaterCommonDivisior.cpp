/*  name: jianxin zhu
    date: july/16/2020
*/

#include<iostream>
#include<iomanip>
using namespace std;

int greatCommonDivisor(int number, int number2)
{
	int smallest = number;

	if (number2 < smallest)
	{
		smallest = number2;
	}
	int largest = 0;
	for (int i = 1; i <= smallest; i++)
	{
		if ((number % i == 0) && (number2 % i == 0))
		{
			if (i > largest)
			{
				largest = i;
			}
		}
	}

	return largest;
}

int main()
{
	int number1, number2;

	cout << "Enter two integer number, find the GCD: ";
	cin >> number1 >> number2;

	cout << "The greater common divisior: " << greatCommonDivisor(number1, number2) << endl;
}
