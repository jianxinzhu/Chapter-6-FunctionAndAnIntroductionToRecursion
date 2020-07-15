/*  name: jianxin zhu
    date: july/14/2020
 */
 
 #include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

double hypotenuse(double side1, double side2)
{
	double sum =0.0;
	sum = pow(side1, 2) + pow(side2, 2);

	return sqrt(sum);
}

int main()
{
	double side1, side2;

	cout << "Enter side1 and side2, calculate the hypotenuse: ";
	cin >> side1 >> side2;

	cout << "The hypotenuse: " << hypotenuse(side1, side2) << endl;
}
