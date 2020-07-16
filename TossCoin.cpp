/*  name: jianxin zhu
    date: july/16/2020
 */
 
 #include<iostream>
#include<cstdlib>
using namespace std;

int flip()
{
	int x = 0 + rand() % 2;

	return x;
}

int main()
{
	int head = 0, tail = 0;
	cout << "Tossing coin 100 times: ";

	for (int i = 1; i <= 100; i++)
	{
		if (flip() == 1)
		{
			head++;
		}
		else
		{
			tail++;
		}
	}

	cout << "\nHead: " << head << "\nTail: " << tail << endl;
}
