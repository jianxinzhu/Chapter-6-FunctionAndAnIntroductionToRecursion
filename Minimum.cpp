/*  name: jianxin zhu
    date: july/15/2020
 */
 #include<iostream>
using namespace std;

double doubleSmallest(double number, double number2, double number3)
{
	double smallest = number;

	if (smallest > number2)
	{
		smallest = number2;
	}
	
	if (smallest > number3)
	{
		smallest = number3;
	}
	return smallest;
}

int main()
{
	double d1, d2, d3;

	cout << "Enter three double precision, float point value: ";
	cin >> d1 >> d2 >> d3;
	cout << "The smallest is: " << doubleSmallest(d1, d2, d3)<<endl;
}
