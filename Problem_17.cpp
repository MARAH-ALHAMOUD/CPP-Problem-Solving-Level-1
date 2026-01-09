#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadNumber(float& A, float& B) {
	cout << " Plase Enter A?\n";
	cin >> A;
	cout << " Plase Enter B?\n";
	cin >> B;

}
float SumOf3Number(float A, float B) {
	float Arae = (A / 2) * B ;
	return Arae;

}

void PrintTotalNumber(float Area) {
	cout << "Total Of Number: " << Area << endl;

	
}
    int main() {
		float A, B;
		ReadNumber(A, B);
		PrintTotalNumber(SumOf3Number(A, B));
		
			return 0;
}
