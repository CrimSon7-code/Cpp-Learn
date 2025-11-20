#include <iostream>
using namespace std; 

int main()
{
    int first;
    int second;
    int third;
    int fourth;
    int fifth;

    cout << "Hello user!\n";
    cout << "Enter 5 numbers:\n";

    cin >> first;
    cin >> second;
    cin >> third;
    cin >> fourth;
    cin >> fifth;

    int userInput[5] = { first,second,third,fourth,fifth };
    int st_t = 12;
    for (int i = 0; i != st_t; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j != 50; j++) {
                cout << "-";
            }
        }
        else if (i == 1) {
            cout << "Table: " << 1;
        }
        else if (i == 3) {
            //       ------------------------------------------------
            cout << "|   Number   |       Example       |   Result   |";
        }
        else if (i == 5) {
            cout << "|      " << userInput[0] << "     |" << "         " << userInput[0] << "+" << userInput[0] << "         " << "|      " << userInput[0] + userInput[0] << "     |";
        }
        else if (i == 7) {
            cout << "|      " << userInput[0] << "     |" << "         " << userInput[0] << "-" << userInput[0] << "         " << "|      " << userInput[0] - userInput[0] << "     |";
        }
        else if (i == 9) {
            cout << "|      " << userInput[0] << "     |" << "         " << userInput[0] << "*" << userInput[0] << "         " << "|      " << userInput[0] * userInput[0] << "     |";
        }
        else if (i == 11) {
            cout << "|      " << userInput[0] << "     |" << "         " << userInput[0] << "/" << userInput[0] << "         " << "|      " << userInput[0] / userInput[0] << "     |";
        }
        cout << endl;
    }
    system("pause");
    for (int i = 0; i != st_t; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j != 50; j++) {
                cout << "-";
            }
        }
        else if (i == 1) {
            cout << "Table: " << 2;
        }
        else if (i == 3) {
            //       ------------------------------------------------
            cout << "|   Number   |       Example       |   Result   |";
        }
        else if (i == 5) {
            cout << "|      " << userInput[1] << "     |" << "         " << userInput[1] << "+" << userInput[1] << "         " << "|      " << userInput[1] + userInput[1] << "     |";
        }
        else if (i == 7) {
            cout << "|      " << userInput[1] << "     |" << "         " << userInput[1] << "-" << userInput[1] << "         " << "|      " << userInput[1] - userInput[1] << "     |";
        }
        else if (i == 9) {
            cout << "|      " << userInput[1] << "     |" << "         " << userInput[1] << "*" << userInput[1] << "         " << "|      " << userInput[1] * userInput[1] << "     |";
        }
        else if (i == 11) {
            cout << "|      " << userInput[1] << "     |" << "         " << userInput[1] << "/" << userInput[1] << "         " << "|      " << userInput[1] / userInput[1] << "     |";
        }
        cout << endl;
        
    }
    system("pause");
    for (int i = 0; i != st_t; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j != 50; j++) {
                cout << "-";
            }
        }
        else if (i == 1) {
            cout << "Table: " << 3;
        }
        else if (i == 3) {
            //       ------------------------------------------------
            cout << "|   Number   |       Example       |   Result   |";
        }
        else if (i == 5) {
            cout << "|      " << userInput[2] << "     |" << "         " << userInput[2] << "+" << userInput[2] << "         " << "|      " << userInput[2] + userInput[2] << "     |";
        }
        else if (i == 7) {
            cout << "|      " << userInput[2] << "     |" << "         " << userInput[2] << "-" << userInput[2] << "         " << "|      " << userInput[2] - userInput[2] << "     |";
        }
        else if (i == 9) {
            cout << "|      " << userInput[2] << "     |" << "         " << userInput[2] << "*" << userInput[2] << "         " << "|      " << userInput[2] * userInput[2] << "     |";
        }
        else if (i == 11) {
            cout << "|      " << userInput[2] << "     |" << "         " << userInput[2] << "/" << userInput[2] << "         " << "|      " << userInput[2] / userInput[2] << "     |";
        }
        cout << endl;
    }
    system("pause");
    for (int i = 0; i != st_t; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j != 50; j++) {
                cout << "-";
            }
        }
        else if (i == 1) {
            cout << "Table: " << 4;
        }
        else if (i == 3) {
            //       ------------------------------------------------
            cout << "|   Number   |       Example       |   Result   |";
        }
        else if (i == 5) {
            cout << "|      " << userInput[3] << "     |" << "         " << userInput[3] << "+" << userInput[3] << "         " << "|      " << userInput[3] + userInput[3] << "     |";
        }
        else if (i == 7) {
            cout << "|      " << userInput[3] << "     |" << "         " << userInput[3] << "-" << userInput[3] << "         " << "|      " << userInput[3] - userInput[3] << "     |";
        }
        else if (i == 9) {
            cout << "|      " << userInput[3] << "     |" << "         " << userInput[3] << "*" << userInput[3] << "         " << "|      " << userInput[3] * userInput[3] << "     |";
        }
        else if (i == 11) {
            cout << "|      " << userInput[3] << "     |" << "         " << userInput[3] << "/" << userInput[3] << "         " << "|      " << userInput[3] / userInput[3] << "     |";
        }
        cout << endl;
        
    }
    system("pause");
    for (int i = 0; i != st_t; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j != 50; j++) {
                cout << "-";
            }
        }
        else if (i == 1) {
            cout << "Table: " << 5;
        }
        else if (i == 3) {
            //       ------------------------------------------------
            cout << "|   Number   |       Example       |   Result   |";
        }
        else if (i == 5) {
            cout << "|      " << userInput[4] << "     |" << "         " << userInput[4] << "+" << userInput[4] << "         " << "|      " << userInput[4] + userInput[4] << "     |";
        }
        else if (i == 7) {
            cout << "|      " << userInput[4] << "     |" << "         " << userInput[4] << "-" << userInput[4] << "         " << "|      " << userInput[4] - userInput[4] << "     |";
        }
        else if (i == 9) {
            cout << "|      " << userInput[4] << "     |" << "         " << userInput[4] << "*" << userInput[4] << "         " << "|      " << userInput[4] * userInput[4] << "     |";
        }
        else if (i == 11) {
            cout << "|      " << userInput[4] << "     |" << "         " << userInput[4] << "/" << userInput[4] << "         " << "|      " << userInput[4] / userInput[4] << "     |";
        }
        cout << endl;
    }
    system("pause");
}


