#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int ReadNum() {
	int Num;
	cout << "Enter Num?\n";
	cin >> Num;
	return Num;
}

float Calculat(int Num) {
	return float(Num / 2);
}

void PrintResalt(int Num) {

	string Resalt = "Half Of " + to_string(Num) + " is " + to_string(Calculat(Num));
	cout << endl << Resalt << endl;
}
    int main() {
		PrintResalt(ReadNum());
			return 0;
}
