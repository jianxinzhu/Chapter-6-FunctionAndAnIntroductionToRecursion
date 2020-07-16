/*  name: jianxin zhu
    date: july/14/2020
 */
 
 #include<iostream>
#include<cstdlib>
using namespace std;

int integerPower(int base, int exp)
{
	if (exp == 1)
	{
		return base;
	}
	exp--;

	return base * integerPower(base, exp);
}

int main()
{
	int base, exp;

	cout << "Enter your base and exponent: ";
	cin >> base >> exp;

	cout << "The result is : " << integerPower(base, exp) << endl;
}
