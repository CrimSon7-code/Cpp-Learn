#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>
using namespace std;

vector<string> ISP;
vector<string> OIBTS;
vector<string> KVANT;

void initialize_groups() {
    // Инициализация групп (по 19 фамилий)
    ISP = {
        "Фролов Даниил", "Иванов Иван", "Петров Петр", "Сидоров Сидор", "Кузнецов Алексей",
        "Смирнова Мария", "Волкова Анна", "Морозов Дмитрий", "Лебедев Сергей", "Новикова Елена",
        "Григорьев Андрей", "Михайлова Светлана", "Андреев Дмитрий", "Баранова Виктория",
        "Ковалёв Николай", "Романов Михаил", "Федорова Ольга", "Егорова Наталья", "Васильев Константин"
    };
    OIBTS = {
        "Завитушкин Марк", "Кузьмин Андрей", "Лазарев Илья", "Тарасов Виктор", "Морозова Анастасия",
        "Павлов Алексей", "Громова Дарина", "Щербаков Степан", "Борисова Юлия", "Быков Роман",
        "Киселев Дмитрий", "Филиппов Иван", "Петрова Екатерина", "Гусев Владимир", "Дьяков Александр",
        "Мельникова Алина", "Мартынов Павел", "Рыбакова Анастасия", "Лебедева Виктория"
    };
    KVANT = {
        "Градова Ольга", "Коваленко Максим", "Андреева Светлана", "Кузнецов Егор", "Баранов Иван",
        "Федорова Марина", "Волков Виктор", "Луговая Наталья", "Романов Сергей", "Моисеев Анатолий",
        "Зайцева Юлия", "Павловская Ирина", "Григорьев Дмитрий", "Михайлова Елена", "Алексеева Светлана",
        "Костина Анастасия", "Орлов Константин", "Тимофеева Наталья", "Васильева Мария"
    };
}

void g_ISP() {
    bool is_exitG = false;
    while (!is_exitG) {
        system("cls");
        cout << "ИСП:" << endl;
        for (int i = 0; i < ISP.size(); i++) {
            cout << i + 1 << ". " << ISP[i] << endl;
        }
        cout << "\n1. Изменить ФИ студента\n2. Добавить студента\n3. Удалить студента\n4. Назад\n\nВыбор: ";
        int g_choice;
        cin >> g_choice;
        cin.ignore(); // чтобы не было проблем с getline

        int n_st;
        string st_name;

        switch (g_choice) {
        case 1:
            system("cls");
            cout << "Введите номер студента в списке (1-19): ";
            cin >> n_st;
            cin.ignore();
            if (n_st >= 1 && n_st <= 19) {
                cout << "Введите фамилию и имя: ";
                getline(cin, st_name);
                ISP[n_st - 1] = st_name; // исправлено
                cout << "ФИ успешно изменено.\n";
            }
            else {
                cout << "Некорректный номер.\n";
            }
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "Введите фамилию и имя: ";
            getline(cin, st_name);
            ISP.push_back(st_name);
            cout << "ФИ успешно добавлено.\n";
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "Введите номер студента в списке (1-19): ";
            cin >> n_st;
            cin.ignore();
            if (n_st >= 1 && n_st <= 19) {
                ISP.erase(ISP.begin() + n_st - 1);
                cout << "Студент удалён.\n";
            }
            else {
                cout << "Некорректный номер.\n";
            }
            system("pause");
            break;
        case 4:
            is_exitG = true;
            break;
        default:
            cout << "Нет такого варианта. Попробуйте снова.\n";
            system("pause");
        }
    }
}

void g_OIBTS() {
    bool is_exitG = false;
    while (!is_exitG) {
        system("cls");
        cout << "ОИБТС:" << endl;
        for (int i = 0; i < OIBTS.size(); i++) {
            cout << i + 1 << ". " << OIBTS[i] << endl;
        }
        cout << "\n1. Изменить ФИ студента\n2. Добавить студента\n3. Удалить студента\n4. Назад\n\nВыбор: ";
        int g_choice;
        cin >> g_choice;
        cin.ignore();

        int n_st;
        string st_name;

        switch (g_choice) {
        case 1:
            system("cls");
            cout << "Введите номер студента в списке (1-19): ";
            cin >> n_st;
            cin.ignore();
            if (n_st >= 1 && n_st <= 19) {
                cout << "Введите фамилию и имя: ";
                getline(cin, st_name);
                OIBTS[n_st - 1] = st_name;
                cout << "ФИ успешно изменено.\n";
            }
            else {
                cout << "Некорректный номер.\n";
            }
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "Введите фамилию и имя: ";
            getline(cin, st_name);
            OIBTS.push_back(st_name);
            cout << "ФИ успешно добавлено.\n";
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "Введите номер студента в списке (1-19): ";
            cin >> n_st;
            cin.ignore();
            if (n_st >= 1 && n_st <= 19) {
                OIBTS.erase(OIBTS.begin() + n_st - 1);
                cout << "Студент удалён.\n";
            }
            else {
                cout << "Некорректный номер.\n";
            }
            system("pause");
            break;
        case 4:
            is_exitG = true;
            break;
        default:
            cout << "Нет такого варианта. Попробуйте снова.\n";
            system("pause");
        }
    }
}

void g_KVANT() {
    bool is_exitG = false;
    while (!is_exitG) {
        system("cls");
        cout << "КВАНТ:" << endl;
        for (int i = 0; i < KVANT.size(); i++) {
            cout << i + 1 << ". " << KVANT[i] << endl;
        }
        cout << "\n1. Изменить ФИ студента\n2. Добавить студента\n3. Удалить студента\n4. Назад\n\nВыбор: ";
        int g_choice;
        cin >> g_choice;
        cin.ignore();

        int n_st;
        string st_name;

        switch (g_choice) {
        case 1:
            system("cls");
            cout << "Введите номер студента в списке (1-19): ";
            cin >> n_st;
            cin.ignore();
            if (n_st >= 1 && n_st <= 19) {
                cout << "Введите фамилию и имя: ";
                getline(cin, st_name);
                KVANT[n_st - 1] = st_name;
                cout << "ФИ успешно изменено.\n";
            }
            else {
                cout << "Некорректный номер.\n";
            }
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "Введите фамилию и имя: ";
            getline(cin, st_name);
            KVANT.push_back(st_name);
            cout << "ФИ успешно добавлено.\n";
            system("pause");
            break;
        case 3:
            system("cls");
            cout << "Введите номер студента в списке (1-19): ";
            cin >> n_st;
            cin.ignore();
            if (n_st >= 1 && n_st <= 19) {
                KVANT.erase(KVANT.begin() + n_st - 1);
                cout << "Студент удалён.\n";
            }
            else {
                cout << "Некорректный номер.\n";
            }
            system("pause");
            break;
        case 4:
            is_exitG = true;
            break;
        default:
            cout << "Нет такого варианта. Попробуйте снова.\n";
            system("pause");
        }
    }
}

int main() {
    initialize_groups();

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bool is_exit = false;
    while (!is_exit) {
        cout << "База данных студентов:" << endl;
        cout << "1. ИСП\n2. ОИБТС\n3. КВАНТ\n4. Выход\n\nВыбор: ";
        int choice;
        cin >> choice;
        switch (choice) {
        case 1: g_ISP(); break;
        case 2: g_OIBTS(); break;
        case 3: g_KVANT(); break;
        case 4: is_exit = true; break;
        default: cout << "Такой группы нет." << endl; break;
        }
    }
    return 0;
}
