#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int ReadNumber() {
	int N;
	cout << " Plase Enter N?\n";
	cin >> N;
	return N;
}
void PrintRangeFrom_UsingWhile(int N) {
	int counter = 0;
	cout << "Range Printed Using While... \n";
	while (counter < N) {
		counter++;
		cout << counter << endl;
	}
}
void PrintRangeFrom_UsingDoWhile(int N) {
	int counter = 0;
	cout << "Range Printed Using Do While..\n";
	do
	{
		counter++;
		cout << counter << endl;
	} while (counter < N);
 }

void PrintRangeFrom_UsingFor(int N) {
	cout << " Range Printed Using For..\n";
	for (int counter = 1;  counter <= N; counter++)
	{
		cout << counter << endl;
	}
}
    int main() {
		int N = ReadNumber();
		PrintRangeFrom_UsingWhile(N);
		PrintRangeFrom_UsingDoWhile(N);
		PrintRangeFrom_UsingFor(N);
			return 0;
}
