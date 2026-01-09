#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadNumber(int& Num1, int& Num2, int& Num3) {
	cout << " Plase Enter Num1?\n";
	cin >> Num1;
	cout << " Plase Enter Num2?\n";
	cin >> Num2;
	cout << " Plase Enter Num3?\n";
	cin >> Num3;
}
int SumOf3Number(int Num1, int Num2, int Num3) {
	return Num1 + Num2 + Num3;
}

void PrintTotalNumber(float Total) {
	cout << "Total Of Number: " << Total << endl;

}
    int main() {
		int Num1, Num2, Num3;
		ReadNumber(Num1, Num2, Num3);
		PrintTotalNumber(SumOf3Number(Num1, Num2, Num3));
			return 0;
}
