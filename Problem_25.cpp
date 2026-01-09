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
int ReadDoAge(int From, int To) {
	int Age = 0;
	do
	{
		Age = ReadNumber();
	} while (!SumOf3Number(Age, From, To)); 
	return Age;
}

void PrintTotalNumber(int Age) {
		cout << Age << " Is a Valid Age \n";

}
    int main() {
		PrintTotalNumber(ReadDoAge(18, 45));
		
			return 0;
}
