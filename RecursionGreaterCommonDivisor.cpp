/*   name: jianxin zhu
     date: july/17/2020
 */
 
 
 #include<iostream>
#include<iomanip>

using namespace std;

int recursiveGCD(int number1, int number2)
{
	if (number2 == 0)
	{
		return number1;
	}
	else
	{
		return recursiveGCD(number2, number1 % number2);
	}
}

int main()
{
	int x, y;

	cout << "Enter x and y: ";
	cin >> x >> y;

	cout << "The greater common divisor is: " << recursiveGCD(x, y) << endl;
}
