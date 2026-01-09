#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadNumber(int& A, int& B) {
	cout << " Plase Enter A?\n";
	cin >> A;
	cout << " Plase Enter B?\n";
	cin >> B;

}
void SumOf3Number(int &Num1, int &Num2) {
	int Tamp;
	Tamp = Num1;
	Num1 = Num2;
	Num2 = Tamp;

}

void PrintTotalNumber(int A, int B) {
	cout << "Total Of Number: " << A << " and "<< B << endl;

	
}
    int main() {
		int A, B;
		ReadNumber(A, B );
		PrintTotalNumber(A,B);
		SumOf3Number(A, B);
		PrintTotalNumber(A, B);
			return 0;
}
