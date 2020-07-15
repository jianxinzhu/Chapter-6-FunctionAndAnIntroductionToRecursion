/*  name: jianxin zhu
    date: july/14/2020
*/


#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int roundToInteger(double number)
{
	return floor(number + 0.5);
}
double roundToTenth(double number)
{
	return floor(number * 10 + 0.5) / 10;
}
double roundToHundredths(double number)
{
	return floor(number * 100 + 0.5) / 100;
}
double roundToThousandths(double number)
{
	return floor(number * 1000 + 0.5) / 1000;
}

int main()
{
	double number;
	cout << "Enter you number: ";
	cin >> number;

	cout << "Round to integer number: " << roundToInteger(number) << endl;
	cout << "Round to number's Tenth: " << roundToTenth(number) << endl;
	cout << "Round to number's Hundredth: " << roundToHundredths(number) << endl;
	cout << "Round to number's Thousandth: " << roundToThousandths(number) << endl;
}
