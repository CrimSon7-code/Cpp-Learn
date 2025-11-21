#include <iostream>
#include <algorithm> 
using namespace std;

void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}


int main() {
    setlocale(LC_ALL, "Russian");

    const int size = 7;
    int arr[size]; 
    for (int i = 0; i < size; i++) {
        cout << "Введите значение для ячейки " << i << ": ";
       cin >> arr[i];
    }

    int choice;
    bool running = true;

    while (running) {

        cout << "\n[ + ] Настройки массива:\n";
        cout << "[ 1 ] Сортировка по возрастанию\n";
        cout << "[ 2 ] Сортировка по убыванию\n";
        cout << "[ 3 ] Перемножить массив\n";
        cout << "[ 4 ] Сложить массив\n";
        cout << "[ 5 ] Разделить массив\n";
        cout << "[ 6 ] Обнулить массив\n";
        cout << "[ 9 ] Задать новые значения массиву\n";
        cout << "[ 0 ] Выйти\n";
        cout << "[ + ] Ввод: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            clearConsole();
            int temp[size];
            copy(begin(arr), end(arr), temp);
            sort(temp, temp + size);
            cout << "Массив отсортирован по возрастанию:\n";
            for (int i = 0; i < size; i++) {
                cout << temp[i] << " ";
            }
            cout << "\n";
            break;
        }
        case 2: {
            clearConsole();
            int temp[size];
            copy(begin(arr), end(arr), temp);
            sort(temp, temp + size, greater<int>());
            cout << "Массив отсортирован по убыванию:\n";
            for (int i = 0; i < size; i++) {
                cout << temp[i] << " ";
            }
            cout << "\n";
            break;
        }
        case 3: {
            clearConsole();
            int value;
            cout << "Введите целое число, на которое нужно умножить массив: ";
            cin >> value;
            for (int i = 0; i < size; i++) {
                arr[i] *= value;
            }
            cout << "Массив после умножения:\n";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
            break;
        }
        case 4: {
            clearConsole();
            int value;
            cout << "Введите целое число, которое будет добавлено к каждому элементу массива: ";
            cin >> value;
            for (int i = 0; i < size; i++) {
                arr[i] += value;
            }
            cout << "Массив после сложения:\n";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
            break;
        }
        case 5: {
            clearConsole();
            int value;
            cout << "Введите целое число, на которое будет делиться каждый элемент массива: ";
            cin >> value;
            if (value == 0) {
                cout << "Ошибка: деление на ноль невозможно.\n";
            }
            else {
                for (int i = 0; i < size; i++) {
                    arr[i] /= value;
                }
                cout << "Массив после деления:\n";
                for (int i = 0; i < size; i++) {
                    cout << arr[i] << " ";
                }
                cout << "\n";
            }
            break;
        }
        case 6: {
            clearConsole();
            for (int i = 0; i < size; i++) {
                arr[i] = 0;
            }
            cout << "Массив обнулен.\n";
            break;
        }
        case 9: {
            clearConsole();
            for (int i = 0; i < size; i++) {
                cout << "Введите значение для ячейки " << i << ": ";
                cin >> arr[i];
            }
            break;
        }
        case 0: {
            clearConsole();
            running = false;
            break;
        }
        default:
            clearConsole();
            cout << "Некорректный выбор. Попробуйте снова.\n";
        }
    }

    return 0;
}

