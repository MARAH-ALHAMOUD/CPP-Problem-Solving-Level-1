#include <iostream>
#include <cmath>
#include <string>
using namespace std;



float ReadPositiveNumber(string Message) {
	float Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;

}

float CalculatRemainder(float TotalBill, float TotalPaid) {
	return TotalPaid - TotalBill;
}

int main() {
	float TotalBill = ReadPositiveNumber("Pleas enter Total Bill?");
	float TotalPaid = ReadPositiveNumber("Please enter Total Cash Paid?");
	cout << endl;

	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalPaid << endl;
	cout << " Remainder = " << CalculatRemainder(TotalBill, TotalPaid) << endl;
	return 0;
}
