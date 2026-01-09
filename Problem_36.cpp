#include <iostream>
//#include <cmath>
#include <string>
using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message) {
	float Number;
	cout << Message;
	cin >> Number;
	return Number;
}


enOperationType ReadOperationType() {
	char OT = 0;
	cout << "Enter Operation Type (+, -, *, /): ";
	cin >> OT;
	return (enOperationType)OT;

}
float Calculate(float Number1, float Number2, enOperationType OperationType) {
	switch (OperationType)
	{
	case enOperationType::Add:
		return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;
	case enOperationType::Multiply:
		return Number1 * Number2;
	case enOperationType::Divide:
		if (Number2 == 0) {
			cout << "Error: Division by zero is not allowed" << endl;
			return 0;
		}
		else {
			return Number1 / Number2;
		}
	default:
		return 0;

	}
}
int main() {

	float Number1 = ReadNumber("Enter first number: ");
	float Number2 = ReadNumber("Enter second number: ");
	enOperationType OperationType = ReadOperationType();
	cout << endl << "Result = " << Calculate(Number1, Number2, OperationType);

	return 0;
}
