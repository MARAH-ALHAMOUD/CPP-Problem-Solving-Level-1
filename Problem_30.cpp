#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ReadNumber(string Messag) {
	int Number;
	do
	{
		cout << Messag << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;

}

int Factorial(int N) {
	int F = 1;
	for (int Counter = N; Counter >= 1; Counter --)
	{
		F *= Counter;
	}
	return F;
}
    int main() {
		cout << Factorial(ReadNumber("Please Enter N? ")) << endl;
			return 0;
}
