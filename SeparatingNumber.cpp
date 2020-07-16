/*  name: jianxin zhu
    date: july/15/2020
*/


#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int number;
	int base = 1;
	cout << "Enter a number: ";
	cin >> number;

	for (int i = number; i >= 10; i /= 10)
	{
		base *= 10;
	}

	while (base > 0)
	{
		int x = (number / base) % 10;
		cout << x << "  ";

		base /= 10;
	}
}
