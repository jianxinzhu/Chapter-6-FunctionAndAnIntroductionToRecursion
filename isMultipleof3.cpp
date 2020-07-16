/*   name: jianxin zhu
     date: july/15/2020
*/

#include<iostream>
#include<cmath>
using namespace std;

bool isMultiple3(int number)
{
	int base = 3;
	if (number % base == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int number;

	cout << "Enter the number :";
	
	while (cin >> number)
	{
		cout << "The number can " << (isMultiple3(number) ? " be multiple of 3" : " not be multiple of 3") << endl;


		cout << "Enter the number : ";
	}
}
