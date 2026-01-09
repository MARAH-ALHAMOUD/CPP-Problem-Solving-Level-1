#include <iostream>
#include <cmath>
#include <string>
using namespace std;


struct StrInfo
{
	int Age;
	bool HasDriving;
	bool RecommDriving;
};

StrInfo ReadInfo() {
	StrInfo Info;
	cout << " Enter Age?\n";
	cin >> Info.Age;
	cout << "Enter HasDriving?\n";
	cin >> Info.HasDriving;
	cout << "Enter RecommDriving?\n";
	cin >> Info.RecommDriving;
	return Info;
}

bool IsAccepted(StrInfo Info) {
	if (Info.RecommDriving) {
		return true;
	}
	else
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
