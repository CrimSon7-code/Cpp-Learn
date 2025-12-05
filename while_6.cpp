#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int menuNum;
	int b;
	int count = 0;
	int sum = 0;
	double arim;

	cout << "== Среднее арифметическое == " << endl;
	cout << "[ 1 ] Начать\n" << "[ 2 ] Выйти\n" << "[ > ] ";
	cin >> menuNum;
	system("cls");
	if (menuNum == 1) {
		cout << "[ + ] Чтобы завершить введите 0\n";
		while (true) {

			cout << "[ > ] Введите число: ";
			cin >> b;

			if (b != 0) {
				sum = sum + b;
				count++;
			}
			else {
				arim = sum / count;
				cout << "\n[ + ]Среднее арифметическое введенных чисел: " << "\033[32m" << arim << "\033[0m";
				return 0;
			}
		}
	}
	else {
		cout << "До свидания! ";
	}
}
