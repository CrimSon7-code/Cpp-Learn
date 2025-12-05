#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int menuNum;
	string usPass;
	string password = "12345";

	while (true) {
		cout << "[ + ] == Пароль ==\n";
		cout << "[ 1 ] Начать\n" << "[ 2 ] Выйти\n" << "[ > ] ";
		cin >> menuNum;

		if (menuNum == 1) {
			system("cls");
			while (true) {
				cout << "[ > ] Введите пароль: ";
				cin >> usPass;
				if (usPass == password) {
					cout << "\n\nДобро пожаловать!\n\n";
				}
				else {
					cout << "[ - ] Пароль неверный!\n";
					continue;
				}
			}
		}
		else {
			return 0;
		}
	}
}
