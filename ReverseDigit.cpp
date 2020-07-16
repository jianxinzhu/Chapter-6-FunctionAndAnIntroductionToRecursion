/*  name: jianxin zhu
    date: july/16/2020
*/

#include<iostream>
#include<iomanip>
using namespace std;

void reverseDigit(int number)
{
	int base = 10;


	while (number > 0)
	{
		int x = number % base;
		
		number /= 10;

		cout << x << " ";
	}
}

int main()
{
	int number;
	cout << "Enter a number : ";
	cin >> number;

	cout << "The reverse number: ";
	reverseDigit(number);
}
