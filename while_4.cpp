#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int usNum;

	cout << "[ > ] Введите число: ";
	cin >> usNum;

	if (usNum > 0) {

		int countNum = 0;

		while (usNum <= 0 || usNum >= 10) {
			usNum = usNum / 10;
			countNum++;
		}
		cout << "[ + ] Количество чисел: " << countNum + 1;
	}
	else {
		return 0;
	}
}
