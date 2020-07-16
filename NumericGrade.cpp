/*  name: jianxin zhu
    date: july/16/2020
 */
 
 #include<iostream>
#include<iomanip>
using namespace std;

int numericGrade(double value)
{
	if (value >= 90 && value <= 100)
	{
		return 4;
	}
	else if (value >= 80 && value <= 89)
	{
		return 3;
	}
	else if (value >= 70 && value <= 79)
	{
		return 2;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int grade, count = 0;
	int sum =0;
	
	cout << "Enter student Grade: ";

	while (cin >> grade)
	{
		cout << "Enter student Grade: ";
		sum += grade;
		count++;
	}

	double average = static_cast<double>(sum) / count;
	cout << "-------------------------------\n";

	cout << "The average grade is: " << average << "\nThe numeric grade is: " << numericGrade(average) << endl;
}
