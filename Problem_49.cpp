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
	do
	{
		PinCode = ReadPinCode();
		if (PinCode == "1234")
		{
			return 1;
		}
		else {
			cout << "\n Wrong PIN \n";
			system("Color 4F");
		}
	} while (PinCode != "1234");
	return 0;
}
int main() {
	if (Login())
	{
		system("Color 2F");
		cout << "\n Your Account Belance is " << 7500 << endl;
	}

	return 0;
}
