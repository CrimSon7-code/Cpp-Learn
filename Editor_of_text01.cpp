#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <conio.h>
#include <string>
#include <ctime> 
#include <iomanip> 

using namespace std;

const int saves = 3;

string names_f[saves];   
string files[saves];     
time_t creation_times[saves]; 

void create_file() {
    system("cls");
    for (int i = 0; i < saves; i++) {
        
        cout << "Создание файла " << (i + 1) << ":\n";
        cout << "Введите название файла: ";
        getline(cin, names_f[i]);

        
        cout << "Введите содержимое файла (завершите ввод, введя '$' на новой строке):\n";
        files[i] = "";
        string line;
        while (true) {
            getline(cin, line);
            if (line == "$") break;
            files[i] += line + "\n";
        }

        
        creation_times[i] = time(nullptr);

        cout << "Файл '" << names_f[i] << "' сохранён.\n";
        system("pause");
    }
}

void open_file() {
    system("cls");
    cout << "Доступные файлы:\n";
    for (int i = 0; i < saves; i++) {
        cout << (i + 1) << ". " << names_f[i] << "\n";
    }
    int which_f;
    cout << "Выберите номер файла для открытия: ";
    cin >> which_f;
    cin.ignore(); 

    if (which_f >= 1 && which_f <= saves) {
        int index = which_f - 1;
        cout << "Файл: " << names_f[index] << "\n";
        cout << "Создан: " << ctime(&creation_times[index]) << "\n";
        cout << "Содержимое:\n" << files[index] << endl;

        cout << "\nХотите отредактировать файл? (y/n): ";
        char choice;
        cin >> choice;
        cin.ignore();

        if (choice == 'y' || choice == 'Y') {
            cout << "Введите новое содержимое файла (завершите ввод, введя '$' на новой строке):\n";
            files[index] = "";
            string line;
            while (true) {
                getline(cin, line);
                if (line == "$") break;
                files[index] += line + "\n";
            }
            creation_times[index] = time(nullptr);
            cout << "Файл отредактирован.\n";
        }
    }
    else {
        cout << "Некорректный выбор.\n";
    }
    system("pause");
}

void editor_menu() {
    bool is_exit = false;
    while (!is_exit) {
        system("cls");
        cout << "Нажмите '^' для выхода из программы\n\n";
        cout << "Редактор текста 0.1\n\n";
        cout << "1. Создать файлы\n2. Открыть файл\n3. Выйти\n\nВыберите действие > ";
        int choice;
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            create_file();
            break;
        case 2:
            open_file();
            break;
        case 3:
            is_exit = true;
            break;
        default:
            cout << "Некорректный ввод. Нажмите любую кнопку для продолжения.";
            _getch();
        }
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    names_f[0] = "File1";
    names_f[1] = "File2";
    names_f[2] = "File3";

    for (int i = 0; i < saves; i++) {
        files[i] = "";
        creation_times[i] = 0; 
    }

    editor_menu();
    return 0;
}
