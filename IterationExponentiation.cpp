/*  name: jianxin zhu
    date: july/16/2020
*/

#include<iostream>

using namespace std;

int Exponentiation(int number, int number2)
{
	int res = 1;
	for (int i = 1; i <= number2; i++)
	{
		res *= number;
	}

	return res;

}

int main()
{
	int base, exp;

	cout << "Enter the base and exp: ";
	cin >> base >> exp;

	cout << "The result is: " << (Exponentiation(base, exp)) << endl;
}
