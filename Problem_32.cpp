#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please Enter Number? \n";
	cin >> Number;
	return Number;
}
int ReadPower() {
	int Number;
	cout << "Please Enter The Power? \n";
	cin >> Number;
	return Number;
}

int PoweroOfM(int Number, int M) {
	if (M == 0)
	{
		return 1;
	}
	int P = 1;
	for (int i = 1; i <= M; i++)
	{
		P = P * Number;
	}
	return P;
}
    int main() {
		cout << "Result = " << PoweroOfM(ReadNumber(), ReadPower());
	return 0;
}
