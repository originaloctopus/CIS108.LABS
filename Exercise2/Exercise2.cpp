
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string firstName, lastName;
	int age, confidence, ageDog;

	cout << "Enter your first name (followed by pressing 'enter'): \n";
	cin >> firstName;

	cout << "Enter your last name: \n";
	cin >> lastName;

	cout << "Enter your age: \n";
	cin >> age;

	cout << "What is your confidence in programmers between 0-100%? \n";
	cin >> confidence;

	ageDog = age * 7;
	cout << "Your age in dog years is " << ageDog << ". \n";

	static_cast <double> (confidence);

	if (confidence / 100 < 50)
		cout << "I agree programmers can't be trusted! \n";
	else
		cout << "Writing good code takes hard work! \n";
}