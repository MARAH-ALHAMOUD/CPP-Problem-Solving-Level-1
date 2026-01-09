#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ReadNumber() {
	int Age;
	cout << " Plase Enter Age?\n";
	cin >> Age;
	return Age;
}
bool SumOf3Number(int Number, int From, int To) {
	return (Number >= From && Number <= To);

}

void PrintTotalNumber(int Age) {
	if (SumOf3Number(Age, 18, 45))
		cout << Age << " Is a Valid Age \n";
	else
		cout << Age << " Is a inValid Age \n";
	
}
    int main() {
		PrintTotalNumber(ReadNumber());
		
			return 0;
}
