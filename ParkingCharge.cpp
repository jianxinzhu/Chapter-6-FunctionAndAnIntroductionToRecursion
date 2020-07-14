/*  name: jianxin zhu
    date: july/13/2020
 */
 
 #include<iostream>
#include<iomanip>
using namespace std;

double calculateCharge(double hour)
{
	double totalCharge = 0.0;
	if (hour < 4)
	{
		totalCharge = 20.0;
	}
	else if (hour >= 4 && hour <= 24)
	{
		hour = hour - 3;
		totalCharge = hour * 5.0 + 20.0;
	}
	
	if (totalCharge >= 50.0)
	{
		totalCharge = 50.0;
	}

	return totalCharge;
}

int main()
{
	double i, i2, i3;
	double totalHour, totalpay;

	cout << "Enter parking hour for three car: ";
	cin >> i >> i2 >> i3;

	totalHour = i + i2 + i3;
	totalpay = calculateCharge(i) + calculateCharge(i2) + calculateCharge(i3);

	cout << setprecision(2) << fixed;
	cout << "Car  " << setw(10) << "Hour" << setw(10) << "Charge" << endl;
	cout << "1    " << setw(10) << i << setw(10) << calculateCharge(i) << endl;
	cout << "2    " << setw(10) << i2 << setw(10) << calculateCharge(i2) << endl;
	cout << "3    " << setw(10) << i3 << setw(10) << calculateCharge(i3) << endl;
	cout << "Total" << setw(10) <<totalHour << setw(10) << totalpay << endl;

}
