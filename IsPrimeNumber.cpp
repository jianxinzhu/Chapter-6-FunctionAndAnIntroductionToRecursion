/*   name: jianxin zhu
     date: july/16/2020
*/


#include<iostream>
#include<iomanip>
using namespace std;

bool isPrime(int number)
{
	int factor = 0;
	if (number == 1 || number == 2)
	{
		return true;
	}

	for (int i = 1; i <= number/2; i++)
	{
		if (number % i == 0)
		{
			factor++;
		}
	}

	if (factor >= 2)
	{
		return false;
	}
	else
	{
		return true;
	}

	
}

int main()
{
	cout << "Find the prime number between 1 - 100: " << endl;;

	for (int i = 1; i <= 100; i++)
	{
		if (isPrime(i))
		{
			cout << i << " ";
		}
	}
}
