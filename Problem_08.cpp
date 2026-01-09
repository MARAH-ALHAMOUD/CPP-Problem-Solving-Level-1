#include <iostream>
#include <cmath>
#include <string>
using namespace std;

enum enPassFail{Pass = 1, Fail= 2};
int ReadNum() {
	int Mark;
	cout << "Enter Mark?\n";
	cin >> Mark;
	return Mark;
}

enPassFail CheckMark(int Mark) {

	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void printResalt(int Mark) {
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\n Your Passed\n";
	else
		cout << " You Faild \n";
}
    int main() {
		printResalt(ReadNum());
			return 0;
}
