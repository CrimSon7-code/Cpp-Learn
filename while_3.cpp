#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int menuNum;
	int b;
	int sum = 0;
	int count = 0;
	cout << "== Сумма == " << endl;
	cout << "[ 1 ] Начать\n" << "[ 2 ] Выйти\n" << "[ > ] ";
	cin >> menuNum;
	system("cls");
	if (menuNum == 1) {
		cout << "[ + ] Чтобы завершить введите 0\n";
		while (true) {

			cout << "[ > ] Введите числа, сумму которых хотите получить: ";
			cin >> b;

			if (b != 0) {
				sum = sum + b;
				count++;
			}
			else {
				cout << "\n[ + ] Сумма введенных чисел: " << "\033[32m" << sum << "\033[0m";
				cout << "\n[ + ] Количество введенных чисел: " << "\033[32m" << count << "\033[0m";
				return 0;
			}
		}
	}
	else {
		cout << "До свидания! ";
	}
}
