#include <iostream>
#include <iomanip> 
#include <cmath>
#include <string>
using namespace std;

float ReadNumber() {
	float A;
	cout << " Plase Enter A?\n";
	cin >> A;
	
	return A;
}
float SumOf3Number(float A) {
	 const float PI = 3.14159;
	float Arae = pow(A, 2) * PI ;
	return Arae;

}

void PrintTotalNumber(float Area) {
	cout << "Total Of Number: " << Area << endl;

	
}
    int main() {
	
		PrintTotalNumber(SumOf3Number(ReadNumber()));
		
			return 0;
}
