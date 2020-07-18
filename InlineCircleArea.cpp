/*  name: jianxin zhu
    date: july/17/2020
*/

#include<iostream>
#define Pi 3.14159

using namespace std;

inline double circleArea(int number)
{
	return Pi * number * number;
}

int main()
{
	int radius;
	cout << "Enter the radius: ";
	cin >> radius;

	cout << "The circle area is: " << circleArea(radius) << endl;
}
