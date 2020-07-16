/*  name: jianxin zhu
    date: july/15/2020
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double celsiusDegree(double value)
{
	return (value - 32) * 5 / 9;
}
double fahrenheitDegree(double value)
{
	return 9 / 5 * value + 32;
}

int main()
{
	cout << setprecision(2) << fixed;
	cout << setw(10) << "Fahrenheit: " << setw(10) << "Celsius: " << endl;

	for (int i = 32; i <= 212; i++)
	{
		cout << setw(10) << i << "F" << setw(10) << celsiusDegree(static_cast<double>(i))<<"C";

		cout << endl;
	}

	cout << "-----------------------------------------------" << endl;

	cout << setw(10) << "Celsius: " << setw(10) << "Fahrenheit: " << endl;
	for (int i = 0; i <= 100; i++)
	{
		cout << setw(10) << i << "C" << setw(10) << fahrenheitDegree(static_cast<double>(i)) << "F";

		cout << endl;
	}

}
