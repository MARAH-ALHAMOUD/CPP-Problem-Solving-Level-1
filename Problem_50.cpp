#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string ReadPinCode() {
	string PinCode;
	cout << "Please enter PIN Code?" << endl;
	cin >> PinCode;
	return PinCode;
}

bool Login() {
	string PinCode;
	int Counter = 3;
	do
	{
		Counter--;
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			return 1;
		}
		else {
			cout << "\n Wrong PIN, You have " << Counter << " more tries\n";
			system("Color 4F");
		}
	} while (Counter >= 1 && PinCode != "1234");
	return false;
}
int main() {
	if (Login())
	{
		system("Color 2F");
		cout << "\n Your Account Belance is " << 7500 << endl;
	}
	else {
		cout << "Your card blocked call the bank for help.\n";
	}

	return 0;
}
