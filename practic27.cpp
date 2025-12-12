#include <iostream>
#include <ctime>
#include <algorithm>
using namespace std;

const int rows = 4;
const int cols = 4;

int arr[rows][cols];
void print_arr(int arr[rows][cols]) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = rand() % 50;
        }


    }
    cout << "Инициализированный массив:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Выберите тип сортировки: \n 1 | По возрастанию\n 2 | По убыванию\n\n  > Ввод: ";
    int choice;
    cin >> choice;
    int flat_arr[rows * cols];
    int index = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            flat_arr[index++] = arr[i][j];
        }
    }
    if (choice == 2) {
        sort(flat_arr, flat_arr + rows * cols, greater<int>());
    }
    else if (choice == 1) {
        std::sort(flat_arr, flat_arr + rows * cols);
    }
    else {
        std::cout << "Некорректный ввод. Завершение программы.\n";
        return 0;
    }
    index = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            arr[i][j] = flat_arr[index++];
        }
    }
    cout << "Результат: \n";
    print_arr(arr);
}


