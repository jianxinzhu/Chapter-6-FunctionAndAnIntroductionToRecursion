/*  name: jianxin zhu
    date: july/15/2020
 */
 
 #include<iostream>
#include<cmath>
using namespace std;

int numberOfMinute(int day, int hour, int min)
{
	int sum = 0;
	sum = ((day * 24) + hour) * 60 + min;

	return sum;
}
int main()
{
	int dy, hr, min;
	int firstTime, secondTime;

	cout << "Enter first day (day, hour, min): ";
	cin >> dy >> hr >> min;
	firstTime = numberOfMinute(dy, hr, min);
	cout << "The first day is: " <<firstTime << " mins"<< endl;

	cout << "Enter second day (day, hour, min): ";
	cin >> dy >> hr >> min;
	secondTime = numberOfMinute(dy, hr, min);
	cout << "The second day is: " << secondTime << " mins" << endl;

	cout << "The difference is: " << firstTime - secondTime << " mins" << endl;
	


}
