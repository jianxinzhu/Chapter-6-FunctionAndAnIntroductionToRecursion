/*  name: jianxin zhu
    date: july/16/2020
 */
 
 
 #include<iostream>
#include<cmath>

using namespace std;

double distance(double x1, double y1, double x2, double y2)
{
	double X = x2 - x1;
	double Y = y2 - y1;

	return sqrt(pow(X, 2) + pow(Y, 2));
}

int main()
{
	double d, d2, d3, d4;
	cout << "Enter two point(x,y): ";
	cin >> d >> d2 >> d3 >> d4;

	cout << "The distance between piont(" << d << "," << d2 << ") and point (" << d3
		<< "," << d4 << ") is: " << distance(d, d2, d3, d4) << endl;
}
