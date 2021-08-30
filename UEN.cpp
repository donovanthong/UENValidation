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
		if (UENInput[0] == 'R' == false) {}
		else if (UENInput[0] == 'T' == false) {}
		else if (UENInput[0] == 'S' == false)
			return false;
	return true;
}

bool checkPQ(string UENInput) {
	for (int i = 3; i < 5; i++)
		if (UENInput[0] == 'LP' == false) {}
		else if (UENInput[0] == 'LL' == false) {}
		else if (UENInput[0] == 'FC' == false) {}
		else if (UENInput[0] == 'PF' == false) {}
		else if (UENInput[0] == 'RF' == false) {}
		else if (UENInput[0] == 'MQ' == false) {}
		else if (UENInput[0] == 'MM' == false) {}
		else if (UENInput[0] == 'NB' == false) {}
		else if (UENInput[0] == 'CC' == false) {}
		else if (UENInput[0] == 'CS' == false) {}
		else if (UENInput[0] == 'MB' == false) {}
		else if (UENInput[0] == 'FM' == false) {}
		else if (UENInput[0] == 'GS' == false) {}
		else if (UENInput[0] == 'DP' == false) {}
		else if (UENInput[0] == 'CP' == false) {}
		else if (UENInput[0] == 'NR' == false) {}
		else if (UENInput[0] == 'CM' == false) {}
		else if (UENInput[0] == 'CD' == false) {}
		else if (UENInput[0] == 'MD' == false) {}
		else if (UENInput[0] == 'HS' == false) {}
		else if (UENInput[0] == 'VH' == false) {}
		else if (UENInput[0] == 'CH' == false) {}
		else if (UENInput[0] == 'MH' == false) {}
		else if (UENInput[0] == 'CL' == false) {}
		else if (UENInput[0] == 'XL' == false) {}
		else if (UENInput[0] == 'CX' == false) {}
		else if (UENInput[0] == 'RP' == false) {}
		else if (UENInput[0] == 'TU' == false) {}
		else if (UENInput[0] == 'TC' == false) {}
		else if (UENInput[0] == 'FB' == false) {}
		else if (UENInput[0] == 'FN' == false) {}
		else if (UENInput[0] == 'PA' == false) {}
		else if (UENInput[0] == 'PB' == false) {}
		else if (UENInput[0] == 'SS' == false) {}
		else if (UENInput[0] == 'MC' == false) {}
		else if (UENInput[0] == 'SM' == false) {}
		else if (UENInput[0] == 'GA' == false) {}
		else if (UENInput[0] == 'GB' == false)

			return false;
	return true;
}

bool checknumber5to8(string UENInput) {

	for (int i = 5; i < 9; i++)
		if (isdigit(UENInput[i]) == false)
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
	else if (UEN.size() == 10 && checkfirstchar(UEN) && checkPQ(UEN) && checknumber5to8(UEN) && checklastchar2(UEN)) {
		//assumed that year is from 0000 - 9999
		cout << "\n The UEN Number is under All other entities which will be issued new UEN category";
	}
	else {
			cout << "\n The UEN Number is invalid";
	}
}
