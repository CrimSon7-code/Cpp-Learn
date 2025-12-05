
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");

	int sec;

	cout << "Обратный отсчет\n";
	cout << "Введите количество секунд: ";
	cin >> sec;
	sec++;
	if (sec > 0) {

		while (sec != 1) {
			sec--;
			cout << sec << endl;
			this_thread::sleep_for(chrono::seconds(1));
		}
		cout << "Старт";
	}

	else {
		return 0;
	}
}
