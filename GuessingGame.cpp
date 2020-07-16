/*  name: jianxin zhu
    date: july/16/2020
*/

#include<iostream>
#include<random>
#include<ctime>
using namespace std;


int main()
{
	default_random_engine engine{ static_cast<unsigned int>(time(0)) };
	uniform_int_distribution<unsigned int> randomInt{ 1, 1000 };

	char choice;

	do
	{
		int guess = 0;
		int number = randomInt(engine);

		cout << "Enter Your Number: ";
		cin >> guess;

		while (number != guess)
		{
			if (guess > number)
			{
				cout << "Too high" << endl;
			}
			else if(guess < number)
			{
				cout << "Too low" << endl;
			}

			cout << "Enter Your Number: ";
			cin >> guess;
		}

		cout << "Excellent! You guessed the number!\nWold you like to play agin(y or n)?" << endl;
		cin >> choice;

	} while (choice != 'n');

	
}
