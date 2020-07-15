/*  name: jianxin zhu
    date: july/14/2020
*/


#include<iostream>
#include<cstdlib>
using namespace std;


int main()
{
	int set[] = { 0,3,6,9,12 };
	int face;


	for (int i = 1; i <= 10; i++)
	{
		int number = rand() % 5;
		printf("%d ", set[number]);
	}
	return 0;
}
