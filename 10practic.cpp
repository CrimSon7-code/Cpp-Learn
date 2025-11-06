
#include <iostream>
#include <random>
using namespace std;

void game() {
	int rint1 = rand() % 10 + 1;
	int rint2 = rand() % 10 + 1;
	int rint3 = rand() % 10 + 1;

	int attempts = 5;
	int guessedNumCount = 0;
	int guessedNum;



	while (attempts > 0 and guessedNumCount < 3) {
		cout << "Угаданных чисел: [ 0 / 3 ]" << endl;
		cout << "Попыток: " << attempts << endl;
		cout << endl;
		cout << "Угадать число: ";
		cin >> guessedNum;

		if (guessedNum < 1 || guessedNum > 10) {
			cout << "Некорректный ввод! Введите число от 1 до 10." << endl;
			continue;
		}
		
		if (guessedNum == rint1 or guessedNum == rint2 or guessedNum == rint3) {
			guessedNum++;

			cout << "Одно из чисел угадано!" << endl;

		}
		else {
			cout << "Число не угадано!" << endl;
		}
		attempts--;
	}
	if (guessedNumCount == 3) {
		cout << "Победа! Все числа угаданы." << endl;

	}
	else {
		cout << "Игра окончена. Попытки исчерпаны." << endl;
		cout << "Загаданные числа были: " << rint1 << ", " << rint2 << ", " << rint3 << endl;


	}
		
}

int main()
{ 
	setlocale(LC_ALL, "Russian");
	srand(time(0)); 

	int choice;

	while (true) {
		cout << "=== Меню ===" << endl;
		cout << "1. Начать игру" << endl;
		cout << "2. Выйти" << endl;
		cout << "Выберите пункт: ";
		cin >> choice;
		if (choice == 1) {
			game();
		}
		else if (choice == 2) {
			cout << "Выход из программы. До свидания!" << endl;
			break;
		}
		else {
			cout << "Некорректный выбор. Попробуйте снова." << endl;
		}
	}

	return 0;

}

