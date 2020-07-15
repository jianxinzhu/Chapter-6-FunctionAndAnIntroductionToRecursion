/*  name: jianxin zhu
    date: july/14/2020
*/

#include<iostream>
#include<cmath>
using namespace std;

bool isFactor(int number1, int number2)
{
	if (number1 % number2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int x, y;

	cout << "Enter a pair number, determind the second one is factor of first one: ";
	cin >> x >> y;

	cout << "The number " << y << (isFactor(x, y) ? " is factor" : " is not factor") << " of " << x << endl;
}
