/*  name: jianxin zhu
    date: july/15/2020
*/


 
 #include<iostream>
#include<cmath>
using namespace std;

void disRectangle(int height, int width,char character)
{
	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			cout << character;
		}
		cout << endl;
	}
}

int main()
{
	int height, width;
	char character;
	cout << "Enter the height, width and character: ";
	cin >> height >> width>>character;

	disRectangle(height, width, character);
}
