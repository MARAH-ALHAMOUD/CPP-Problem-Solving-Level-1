#include <iostream>
#include <cmath>
#include <string>
using namespace std;


struct StrInfo
{
	string FirstName;
	string LastName;
};

StrInfo ReadInfo() {
	StrInfo Info;
	cout << " Enter FirstName?\n";
	cin >> Info.FirstName;
	cout << "Enter LastName?\n";
	cin.ignore (1, '\n');
	getline (cin, Info.LastName);
	return Info;
}

string IsAccepted(StrInfo Info, bool Reversd) {
	string FullName = "";

	if (Reversd) 
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;
	
	return FullName;
};

void PrintResalt(string FullNum) {

	cout << "\n Your Full Num Is: " << FullNum << endl;
	
}

    int main() {
		PrintResalt(IsAccepted(ReadInfo(), true));

			return 0;
}
