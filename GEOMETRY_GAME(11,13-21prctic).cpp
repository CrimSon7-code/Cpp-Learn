#include <iostream>
using namespace std;

void clearConsole() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int mainchoice;
    bool is_exit = false;
    while (!is_exit) {
        clearConsole();
        cout << "Программа геометрические фигуры" << endl;
        cout << "Выберите действие: \n" << "0. Выход\n" << "1. Линия\n" << "2. Квадрат\n" << "3. Прямоугольник\n4. Треугольник\n5. Решетка\n6. Крест\n" << endl;

        cin >> mainchoice;
        switch (mainchoice) {
        case 1:
        {
            clearConsole();
            int lineType;
            cout << "Выбрана: Линия" << endl;
            cout << "1.  Горизонтальная\n";
            cout << "2.  Вертикальная\n\n";
            cout << "Выберите тип: ";
            cin >> lineType;
            int length;
            if (lineType == 1) {
                cout << "Длина линии: ";
                cin >> length;
                string texture;
                cout << "Текстура линии: ";
                cin >> texture;
                for (int i = 0; i < length; ++i) {
                    cout << texture << "  ";
                }
                system("pause");
            }
            else if (lineType == 2) {
                cout << "Длина линии: ";
                cin >> length;
                string texture;
                cout << "Текстура линии: ";
                cin >> texture;
                for (int i = 0; i < length; ++i) {
                    cout << texture << endl;
                }
                system("pause");
            }
            else {
                cout << "Некорректный ввод. Попробуйте снова.\n";
                break;
            }
            break;
        }
        case 2:
        {
            clearConsole();
            int squareType;
            cout << "Выбран: Квадрат" << endl;
            cout << "1.  Заполненный\n";
            cout << "2.  Пустой\n\n";
            cout << "Выберите тип: ";
            cin >> squareType;
            int length;
            if (squareType == 1) {
                cout << "Размер: ";
                cin >> length;
                string texture;
                cout << "Текстура линии: ";
                cin >> texture;
                for (int i = 0; i < length; ++i) {

                    for (int j = 0; j < length; ++j) {
                        cout << texture << " ";
                    }
                    cout << endl;

                }
                system("pause");
            }
            else if (squareType == 2) {
                cout << "Размер: ";
                cin >> length;
                string texture;
                cout << "Текстура линии: ";
                cin >> texture;
                for (int i = 0; i < length; i++) {
                    for (int j = 0; j < length; j++) {
                        if (i == 0 || i == length - 1 || j == 0 || j == length - 1) {
                            cout << texture;
                        }
                        else {
                            cout << " ";
                        }

                    }
                    cout << endl;
                }
                system("pause");
            }
            break;
        }
        case 3:
        {
            clearConsole();
            int rectType;
            cout << "Выбран: Прямоугольник" << endl;
            cout << "1.  Заполненный\n";
            cout << "2.  Пустой\n\n";
            cout << "Выберите тип: ";
            cin >> rectType;
            int length;
            int width;
            if (rectType == 1) {
                cout << "Длина: ";
                cin >> length;
                cout << "Ширина: ";
                cin >> width;
                string texture;
                cout << "Текстура линии: ";
                cin >> texture;
                for (int i = 0; i < length; ++i) {

                    for (int j = 0; j < width; ++j) {
                        cout << texture << " ";
                    }
                    cout << endl;

                }
                system("pause");
            }
            else if (rectType == 2) {
                cout << "Длина: ";
                cin >> length;
                cout << "Ширина: ";
                cin >> width;
                string texture;
                cout << "Текстура линии: ";
                cin >> texture;
                for (int i = 0; i < length; i++) {
                    for (int j = 0; j < width; j++) {
                        if (i == 0 || i == length - 1 || j == 0 || j == width - 1) {
                            cout << texture;
                        }
                        else {
                            cout << " ";
                        }

                    }
                    cout << endl;
                }
                system("pause");
            }
            break;
        }
        case 4: {
            clearConsole();
            cout << "\nФигура: “Треугольник”\n";

            int triType;
            cout << "1. Заполненный\n";
            cout << "2. Пустой\n";
            cout << "Выберите тип: ";
            cin >> triType;

            int size;
            cout << "Размер (высота): ";
            cin >> size;

            string texture;
            cout << "Текстура: ";
            cin >> texture;

            cout << "\nРезультат:\n";

            if (triType == 1) {
                for (int i = 1; i <= size; ++i) {
                    for (int j = 0; j < size - i; ++j) {
                        cout << "  ";
                    }
                    for (int k = 0; k < 2 * i - 1; ++k) {
                        cout << texture << "  ";
                    }
                    cout << "\n";
                }
                system("pause");
            }
            else if (triType == 2) {
                for (int i = 1; i <= size; ++i) {
                    for (int j = 0; j < size - i; ++j) {
                        cout << "  ";
                    }
                    if (i == 1) {
                        cout << texture << "\n";
                    }
                    else if (i == size) {
                        for (int j = 0; j < 2 * i - 1; ++j) {
                            cout << texture << " ";
                        }
                        cout << "\n";
                    }
                    else {
                        cout << texture;
                        for (int j = 0; j < 2 * i - 3; ++j) {
                            cout << "  ";
                        }
                        cout << texture << "\n";
                    }
                }
                system("pause");
            }
            break;
        }
        case 5: {
            clearConsole();
            cout << "\nФигура: “Решетка”\n";
            int size;
            cout << "Размер: ";
            cin >> size;
            string texture;
            cout << "Текстура: ";
            cin >> texture;
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i % 2 == 0) {
                        if (j % 2 == 0)
                            cout << ". ";
                        else
                            cout << texture << " ";
                    }
                    else {
                        cout << texture << " ";
                    }
                }
                cout << "\n";
            }
            system("pause");
            break;
        }
        case 6: {
            clearConsole();
            cout << "Выбрана: Крест" << endl;
            int size;
            cout << "Размер (нечетное число): ";
            cin >> size;
            if (size % 2 == 0) {
                cout << "Пожалуйста, введите нечетное число.\n";
                system("pause");
                continue;

            }
            string texture;
            cout << "Текстура: ";
            cin >> texture;

            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    // Рисуем крестик по диагоналям
                    if (i == j || i + j == size - 1)
                        cout << texture <<" ";
                    else
                        cout << ". ";
                }
                cout << "\n";
            }
            system("pause");
            break;
        }
        case 0:
        {
            is_exit = true;
            break;
        }
        default:
        {
            cout << "Ошибка, попробуйте еще раз.";
            system("pause");
            break;
        }
        }
        



        
    }
}
