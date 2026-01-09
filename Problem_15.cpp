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
float SumOf3Number(float A, float B) {
	return A * B;

}

void PrintTotalNumber(float Area) {
	cout << "Total Of Number: " << Area << endl;

	
}
    int main() {
		int A, B;
		ReadNumber(A, B);
		PrintTotalNumber(SumOf3Number(A, B));
		
			return 0;
}
