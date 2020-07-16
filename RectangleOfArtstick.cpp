/*  name: jianxin zhu
    date: july/15/2020
*/

#include<iostream>
#include<cmath>
using namespace std;

void disRectangle(int height, int width)
{
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

int main()
{
	int height, width;
	cout << "Enter the height, width: ";
	cin >> height >> width;

	disRectangle(height, width);
}
