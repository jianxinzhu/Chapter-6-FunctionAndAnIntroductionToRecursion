/*   name: jianxin zhu
     date: july/17/2020
 */
 
 #include<iostream>
using namespace std;


int tripleByValue(int count)
{
	return count * count * count;
}

int tripleByReference(int& count)
{
	return count * count * count;
}

int main()
{
	int number1, number2;
	cout << "Enter a integer number: ";
	cin >> number1;
	cout << "Passing by value: " << tripleByValue(number1) << endl;


	cout << "--------------------------------------" << endl;

	cout << "Enter a integer number: ";
	cin >> number2;
	cout << "Passing by value: " << tripleByReference(number2) << endl;

}
