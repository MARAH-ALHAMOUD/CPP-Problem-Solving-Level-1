#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void ReadNumber(float &A, float &B, float &C) {
	cout << " Plase Enter A?\n";
	cin >> A;
	cout << " Plase Enter B?\n";
	cin >> B;
	cout << " Plase Enter C?\n";
	cin >> C;
}
float SumOf3Number(float A, float B, float C) {
	float P = (A + B + C) / 2;
	 const float PI = 3.14159;
	 float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
	 float Arae = PI * pow(T, 2);

	return Arae;

}

void PrintTotalNumber(float Area) {
	cout << "Total Of Number: " << Area << endl;

	
}
    int main() {
		float A, B, C;
		ReadNumber(A, B, C);
		PrintTotalNumber(SumOf3Number(A,B, C));
		
			return 0;
}
