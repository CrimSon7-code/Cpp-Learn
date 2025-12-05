#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int quan;
	int a = 1;
	int usNum;
	
	cout << "== Таблица умножения ==\n" << "[ + ] Введите число";
	cout << "[ > ] ";
	cin >> usNum;

	while (a != 11) {
		quan = usNum * a;
		cout << usNum << " * " << a << " = " << quan << endl;
		a++;
	}
}
