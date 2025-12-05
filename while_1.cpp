#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int menu_choice;
	int num;
	int sum = 0;
	cout << "== Сумма == " << endl;
	cout << "[ 1 ] Начать\n" << "[ 2 ] Выйти\n" << "[ > ] ";
	cin >> menu_choice;
	system("cls");
	if (menu_choice == 1) {
		cout << "[ + ] Чтобы завершить введите 0\n";
		while (true) {

			cout << "[ > ] Введите числа, сумму которых хотите получить: ";
			cin >> num;

			if (b != 0) {
				sum = sum + num;
			}
			else {
				cout << "\n[ + ]Сумма введенных чисел: " << "\033[32m" << sum << "\033[0m";
				return 0;
			}
		}
	}
	else {
		cout << "До свидания! ";
	}
}
