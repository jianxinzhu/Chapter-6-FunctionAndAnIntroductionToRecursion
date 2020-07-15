/* name: jianxin zhu
   date: july/14/2020
*/

#include<iostream>
#include<cmath>
using namespace std;

int roundNumber(double number)
{
	return floor(number + 0.5);
}

int main()
{
	double number;

	for (int i = 1; i <= 10; i++)
	{
		cout << "Enter your number: ";
		cin >> number;

		cout << "Original Number: " << number
			<< "\nAfter Rounding: " << roundNumber(number) << endl;
	}
}
