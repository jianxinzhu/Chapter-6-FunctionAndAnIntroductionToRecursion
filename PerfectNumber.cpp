/*  name: jianxin zhu
    date: july/15/2020
*/

#include<iostream>
#include<iomanip>
using namespace std;

bool isPefect(int number)
{
	int sum = 0;

	for (int i = 1; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			sum += i;
		}
	}

	return sum == number;
}

int main()
{
	cout << "The perfect number between 0 - 1000:" << endl;
	
	cout <<setw(10)<< "Pefect Number: " <<setw(10)<< "Factor: " << endl;
	for (int i = 1; i <= 1000; i++)
	{
		if (isPefect(i))
		{
			cout << setw(13)<< i <<setw(5);

			for (int j = 1; j < i; j++)
			{
				if (i % j == 0)
				{
					cout << j << " ";
				}
			}

			cout << endl;
		}
	}
}
