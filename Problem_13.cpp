#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadNumber(int& A, int& B, int &C) {
	cout << " Plase Enter A?\n";
	cin >> A;
	cout << " Plase Enter B?\n";
	cin >> B;
	cout << " Plase Enter C?\n";
	cin >> C;

}
int SumOf3Number(int 
	A, int B, int C) {
	if (A > B)
		if (A > C)
			return A;
		else
			return C;

	else
		if (B > C)
			return B;
		else 
		return C;
}

void PrintTotalNumber(float Total) {
	cout << "Total Of Number: " << Total << endl;

	
}
    int main() {
		int A, B, C;
		ReadNumber(A, B, C);
		PrintTotalNumber(SumOf3Number(A, B, C));
			return 0;
}
