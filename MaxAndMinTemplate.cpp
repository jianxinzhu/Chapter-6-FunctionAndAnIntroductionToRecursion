/*  name: jianxin zhu
    date: july/17/2020
 */
 
 
 #include<iostream>
using namespace std;

template<typename T>
T maximum(T value1, T value2)
{
	T largest = value1;

	if (value2 > value1)
	{
		largest = value2;
	}

	return largest;
}

template<typename T>
T minimum(T value1, T value2)
{
	T smallest = value1;

	if (value2 < value1)
	{
		smallest = value2;
	}

	return smallest;
}

int main()
{
	int i, i2;
	double d, d2;
	char a, a2;

	cout << "Find the smallest and largest value: \n";
	cout << "Enter two integer number, find smallest: ";
	cin >> i >> i2;

	cout << "The smallest is: " << minimum(i, i2) << endl;

	cout << "Enter two integer number, find largest: ";
	cin >> i >> i2;
	
	cout << "The largest is: " << maximum(i, i2);

	cout << endl;
	cout << "Enter two float point number, find smallest: ";
	cin >> d >> d2;

	cout << "The smallest is: " << minimum(d, d2) << endl;

	cout << "Enter two float point number, find largest: ";
	cin >> d >> d2;

	cout << "The largest is: " << maximum(d, d2);

	cout << endl;
	cout << "Enter two character, find smallest: ";
	cin >> a >> a2;

	cout << "The smallest is: " << minimum(a, a2) << endl;

	cout << "Enter two character, find largest: ";
	cin >> a >> a2;

	cout << "The largest is: " << maximum(a, a2);
}
