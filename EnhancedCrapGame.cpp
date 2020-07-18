/*  name: jianxin zhu
    date: july/17/2020
*/

#include<iostream>
#include<cstdlib>
#include<random>
#include<ctime>
using namespace std;

/* 
random_device rd;
mt19937 gen(rd());

inline unsigned int rollDice()
{

	int die1 = uniform_int_distribution<unsigned int>{ 1, 6 }(gen);
	int die2 = uniform_int_distribution<unsigned int>{ 1, 6 }(gen);

	int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;

	return sum;
}
*/

unsigned int rollDice()
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;

	return sum;
}

int main()
{
	enum class Status{CONTINUE, WON, LOST};

	srand(static_cast<unsigned int>(time(0)));

	unsigned int myPoint = 0;
	double myBalance = 1000.00, wager;
	char myChoice;
	Status myStatus;

	cout << "**********Welcome to Crap Game************" << endl;

	do {


		cout << "Enter your wager for this game: ";
		cin >> wager;
		unsigned int sumOfDice = rollDice();



		switch (sumOfDice)
		{
		case 7:
		case 11:
			myStatus = Status::WON;
			break;
		case 2:
		case 3:
		case 12:
			myStatus = Status::LOST;
			break;
		default:
			myStatus = Status::CONTINUE;
			myPoint = sumOfDice;
			cout << "Point is " << myPoint << endl;
			break;
		}

		while (Status::CONTINUE == myStatus)
		{
			sumOfDice = rollDice();

			if (sumOfDice == myPoint)
			{
				myStatus = Status::WON;
			}
			else
			{
				if (sumOfDice == 7)
				{
					myStatus = Status::LOST;
				}
			}
		}

		if (Status::WON == myStatus)
		{
			cout << "Player wins" << endl;
			myBalance += wager;
			cout << "Your Balance is: " << myBalance << endl;
		}
		else
		{
			cout << "Plyer lost" << endl;
			myBalance -= wager;
			cout << "Your Balance is: " << myBalance << endl;
		}

		if (myBalance <= 0)
		{
			cout << "Sorry, You busted" << endl;
			return 0;
		}
		else if (myBalance >= 500 && myBalance <= 800)
		{
			cout << "Oh, you're goint for broke, huh?" << endl;
		}
		else if (myBalance >= 100 && myBalance <= 400)
		{
			cout << "Aw cmon, take a chance" << endl;
		}

		cout << "You want to play again(y or n): ";
		cin >> myChoice;

		cout << "-----------------------------------" << endl;

		if (myChoice == 'n')
		{
			cout << "You're up big. Now's time to cash in your chips!" << endl;
		}


	} while (myChoice != 'n');



}
