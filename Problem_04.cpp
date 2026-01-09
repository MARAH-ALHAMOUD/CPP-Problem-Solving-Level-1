#include <iostream>
#include <cmath>
#include <string>
using namespace std;


struct StrInfo
{
	int Age;
	bool HasDriving;
};

StrInfo ReadInfo() {
	StrInfo Info;
	cout << " Enter Age?\n";
	cin >> Info.Age;
	cout << "Enter HasDriving?\n";
	cin >> Info.HasDriving;
	return Info;
}

bool IsAccepted(StrInfo Info) {

	return (Info.Age >= 21 && Info.HasDriving);
};

void PrintResalt(StrInfo Info) {

	if (IsAccepted(Info))

		cout << "\n Hired \n";
	else
		cout << " \n Rejected \n";
	
}

    int main() {
		PrintResalt(ReadInfo());

			return 0;
}
