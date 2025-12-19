#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

void console(const std::string& text, const std::string& color = "", int underlineFlag = 0) {
    std::string escapeSeq;

    if (color.empty()) {
        std::cout << text << std::endl;
        return;
    }

    if (underlineFlag != 0) {
        escapeSeq += "\033[4m";
    }

    if (color == "red")       escapeSeq += "\033[31m";
    else if (color == "green")   escapeSeq += "\033[32m";
    else if (color == "blue")    escapeSeq += "\033[34m";
    else if (color == "cyan")    escapeSeq += "\033[36m"; 
    else if (color == "yellow")  escapeSeq += "\033[33m";
    else if (color == "violet")  escapeSeq += "\033[35m";

    std::cout << escapeSeq << text << "\033[0m" << std::endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Пример обычного вывода:" << endl;
    cout << "Привет мир!" << endl;

    cout << "\nЦвета:" << endl;
    console("Красный", "red");
    console("Зеленый", "green");
    console("Синий", "blue");
    console("Голубой", "cyan");
    console("Желтый", "yellow");
    console("Фиолетовый", "violet");

    cout << "\nЦвет с подчеркиванием:" << endl;
    console("Красный с подчеркиванием", "red", 1);
    console("Зеленый с подчеркиванием", "green", 1);

    cout << "\nБез цвета (обычный):" << endl;
    console("Просто текст без цвета");

    return 0;
}


