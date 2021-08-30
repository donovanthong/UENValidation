#include <iostream>
using namespace std;
std::string UEN;
std::string first_eight;
std::string x;


bool checkfirst8numbers(string UENInput) {
	
		for (int i = 0; i < 8; i++)
			if (isdigit(UENInput[i]) == false)
				return false;
		return true;
}

bool checklastchar(string UENInput) {

	for (int i = 8; i < 9; i++)
		if (isalpha(UENInput[i]) == false)
			return false;
	return true;
}

bool checkfirst9numbers(string UENInput) {
	for (int i = 0; i < 9; i++)
		if (isdigit(UENInput[i]) == false)
			return false;
	return true;
}

bool checklastchar2(string UENInput) {

	for (int i = 9; i < 10; i++)
		if (isalpha(UENInput[i]) == false)
			return false;
	return true;
}
bool checkfirstchar(string UENInput) {
	for (int i = 0; i < 1; i++)
		if (UENInput.at(0) == 'T' || UENInput.at(0) == 'S' || UENInput.at(0) == 'R' == false)
			return false;
	return true;
}

int main() {
	cout << "Enter UEN Number \n";
	cin >> UEN;
	cout << "UEN is " << UEN;

	if (UEN.size() == 9 && checkfirst8numbers(UEN) && checklastchar(UEN)) {

			cout << "\n The UEN Number is under Businesses registered with ACRA category";
	}
	else if(UEN.size() == 10 && checkfirst9numbers(UEN) && checklastchar2(UEN)){
		//assumed that year is from 0000 - 9999
			cout << "\n The UEN Number is under Local companies registered with ACRA category";
	}
	else if (UEN.size() == 10 && checkfirstchar(UEN)) {
		cout << "\n The UEN Number is under All other entities which will be issued new UEN category";
	}
	else {
			cout << "\n The UEN Number is invalid";
	}
}
