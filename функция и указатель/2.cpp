#include <iostream>
using namespace std;
bool isLeap(int year) {
	if (year % 4 != 0) {
		return false;
	}
	if (year % 4 != 0 && year % 100 != 0 && year % 400 != 0) {
		return false;
	}
	else { return true; }
}
int monthLength(int year, int month) {
	switch (month) {
	case 1:
		return 31;
	case 2:
		if (isLeap(year)) {
			return 29;
		}
		else { return 28; }
	case 3:
		return 31;
	case 4:
		return 30;
	case 5:
		return 31;
	case 6:
		return 30;
	case 7:
		return 31;
	case 8:
		return 31;
	case 9:
		return 30;
	case 10:
		return 31;
	case 11:
		return 30;
	case 12:
		return 31;
	}
}
int main(void) {
	for (int yr = 2000; yr < 2002; yr++) {
		for (int mo = 1; mo <= 12; mo++)
			cout << monthLength(yr, mo) << " ";
		cout << endl;
	}
	return 0;
}