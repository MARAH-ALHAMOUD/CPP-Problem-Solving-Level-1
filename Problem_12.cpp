#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadNumber(int& Num1, int& Num2) {
	cout << " Plase Enter Num1?\n";
	cin >> Num1;
	cout << " Plase Enter Num2?\n";
	cin >> Num2;

}
int SumOf3Number(int Num1, int Num2) {
	if (Num1 > Num2)
		return Num1;
	else 
		return Num2;
}

void PrintTotalNumber(float Total) {
	cout << "Total Of Number: " << Total << endl;

	
}
    int main() {
		int Num1, Num2;
		ReadNumber(Num1, Num2);
		PrintTotalNumber(SumOf3Number(Num1, Num2));
			return 0;
}
