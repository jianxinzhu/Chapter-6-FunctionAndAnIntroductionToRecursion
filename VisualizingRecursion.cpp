/*   name: jianxin zhu
     date: july/16/2020
*/

#include<iostream>
#include<iomanip>

using namespace std;
int sum = 1;

unsigned long factorial(unsigned long);

int main()
{
	cout << "4! = " << factorial(4) << endl;
}

unsigned long factorial(unsigned long number)
{
	if (number <= 1)
	{
		cout << sum << endl;
		return 1;
	}
	else
	{
		sum *= number;
		cout << sum<<" ";
		return number * factorial(number - 1);
	}
}
