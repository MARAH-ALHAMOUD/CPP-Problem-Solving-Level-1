#include <iostream>
#include <cmath>
#include <string>
using namespace std;

float ReadPositiveNumber(string Message) {
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

float TotalMonths(float LoanAmount, float MonthlyInstallment) {
	return LoanAmount / MonthlyInstallment;
}
int main() {
	float LoanAmount = ReadPositiveNumber("Please enter Loan Amount?");
	float MonthlyInstallment = ReadPositiveNumber("Please enter Monthly Installment?");

	cout << "\n Total Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;

	return 0;
}
