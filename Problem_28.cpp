#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enOddorEven{Odd = 1, Even = 2};
int ReadNumber() {
	int N;
	cout << " Plase Enter N?\n";
	cin >> N;
	return N;
}

enOddorEven CheckOddorEven(int Number) {
	if (Number % 2 != 0)
		return enOddorEven::Odd;
	else
		return enOddorEven::Even;

}
int PrintSumOddNumberFrom_UsingWhile(int N) {
	int counter = 0;
	int sum = 0;
	cout << "Sum odd Number Using While... \n";
	while (counter < N) {
		counter++;
		if (CheckOddorEven(counter) == enOddorEven::Odd)
		{
			sum += counter;
		}
	}
	return sum;
}
int PrintSumOddNumberFrom_UsingDoWhile(int N) {
	int counter = 0;
	int sum = 0;
	cout << "Sum odd Number Using DoWhile... \n";
	do{ 
		counter++;
		if (CheckOddorEven(counter) == enOddorEven::Odd)
		{
			sum += counter;
		}
	} while (counter < N);
	return sum;
 }

int PrintSumOddNumberFrom_UsingFor(int N) {
	int sum = 0;
	cout << "Sum Odd Number Using For Statement: \n";
	for (int counter = 1;  counter <= N; counter++)
	{
		if (CheckOddorEven(counter) == enOddorEven::Odd) {
			sum += counter;
		}
	}
	return sum;
}
    int main() {
		int N = ReadNumber();
		cout << PrintSumOddNumberFrom_UsingWhile(N) << endl;
		cout << PrintSumOddNumberFrom_UsingDoWhile(N) << endl;
		cout << PrintSumOddNumberFrom_UsingFor(N) << endl;
			return 0;
}
