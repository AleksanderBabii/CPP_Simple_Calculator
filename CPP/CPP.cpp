#include <iostream>
#include <string>
using namespace std;



int main()
{
	double firstNumber, secondNumber;
	char operation, choise;

	do {
		cout << "Enter first number: ";
		cin >> firstNumber;
		cout << "Enter second number: ";
		cin >> secondNumber;

		cout << "Please select an operation: +, -, *, /, %" << endl;
		cin >> operation;

		switch (operation) {
		case '+':
			cout << firstNumber << " + " << secondNumber << " = " << firstNumber + secondNumber << endl;
			break;
		case '-':
			cout << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << endl;
			break;
		case '*':
			cout << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << endl;
			break;
		case '/':
			if ((int)secondNumber != 0) {
				cout << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << endl;
			}
			else {
				cout << "Division by zero is not allowed" << endl;
				continue;
			}
			break;
		case '%':
			if ((int)secondNumber != 0) {
				cout << firstNumber << " % " << secondNumber << " = " << (int)firstNumber % (int)secondNumber << endl;
			}
			else {
				cout << "Error: Modulus by zero is not allowed!" << endl;
				continue;
			}
			break;

		default:
			cout << "Invalid operation" << endl;
			continue;
		}
		cout << "Do you want to continue? (y/n)" << endl;
		cin >> choise;

	} while (choise == 'y' || choise == 'Y');

	cout << "Goodbye! Thanks for using the calculator." << endl; 
	return 0;
}
