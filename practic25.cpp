#include <iostream>
using namespace std;

void maze15(const int maze[15][15]) {
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 15; j++) {
            if (maze[i][j] == 1)
                cout << "# ";
            else
                cout << ". ";
        }
        cout << endl;
    }
}
void maze20(const int maze[20][20]) {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (maze[i][j] == 1)
                cout << "# ";
            else
                cout << ". ";
        }
        cout << endl;
    }
}
void maze30(const int maze[30][30]) {
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            if (maze[i][j] == 1)
                cout << "# ";
            else
                cout << ". ";
        }
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout << " Программа - “Лабиринт”\n\n Размер карты:\n\n[1] 15 x 15\n[2] 20 x 20\n[3] 30 x 30\n\n[+] Выберите размер:";
    int choice;
    cin >> choice;

    switch (choice) {

    case 1: {
        int maze[15][15];
        for (int i = 0; i < 15; ++i) {
            for (int j = 0; j < 15; ++j)
                maze[i][j] = 1;
        }
        for (int i = 10; i < 15; i++) {
            maze[i][1] = 0;
            
        }
        for (int i = 2; i <= 7; i++) {
            maze[10][i] = 0;
        }
        maze[11][7] = 0;
        for (int i = 8; i < 10; i++) {
            maze[i][4] = 0;
        }
        for (int i = 5; i <= 8; i++) {
            maze[i][5] = 0;
        }
        for (int i = 5; i <= 8; i++) {
            maze[5][i] = 0;
        }
        for (int i = 2; i <= 7; i++) {
            maze[i][8] = 0;
        }
        for (int i = 8; i <=12; i++) {
            maze[7][i] = 0;
        }
        maze[8][12] = 0;
        maze[9][12] = 0;
        maze[9][13] = 0;
        maze[9][14] = 0;

        maze15(maze);
        break;
    }
    case 2: {
        int maze[20][20];
        for (int i = 0; i < 20; ++i) {
            for (int j = 0; j < 20; ++j)
                maze[i][j] = 1;
        }
        for (int i = 10; i < 15; i++) {
            maze[i][1] = 0;

        }
        for (int i = 2; i <= 7; i++) {
            maze[10][i] = 0;
        }
        maze[11][7] = 0;
        for (int i = 8; i < 10; i++) {
            maze[i][4] = 0;
        }
        for (int i = 5; i <= 8; i++) {
            maze[i][5] = 0;
        }
        for (int i = 5; i <= 8; i++) {
            maze[5][i] = 0;
        }
        for (int i = 0; i <= 7; i++) {
            maze[i][8] = 0;
        }
        for (int i = 8; i <= 12; i++) {
            maze[7][i] = 0;
        }
        for (int i = 10; i <= 18; i++) {
            maze[i][12] = 0;
        }
        for (int i = 12; i <= 19; i++) {
            maze[18][i] = 0;
        }
        for (int i = 20; i <= 20; i++) {
            maze[i][13] = 0;
        }
        maze[8][12] = 0;
        maze[9][12] = 0;
        maze[9][13] = 0;
        maze[9][14] = 0;

        maze20(maze);
        break;
    }
    case 3: {
        int maze[30][30];
        for (int i = 0; i < 30; ++i) {
            for (int j = 0; j < 30; ++j)
                maze[i][j] = 1;
        }
        for (int i = 10; i < 15; i++) {
            maze[i][1] = 0;

        }
        for (int i = 2; i <= 7; i++) {
            maze[10][i] = 0;
        }
        maze[11][7] = 0;
        for (int i = 8; i < 10; i++) {
            maze[i][4] = 0;
        }
        for (int i = 5; i <= 8; i++) {
            maze[i][5] = 0;
        }
        for (int i = 5; i <= 8; i++) {
            maze[5][i] = 0;
        }
        for (int i = 0; i <= 7; i++) {
            maze[i][8] = 0;
        }
        for (int i = 8; i <= 12; i++) {
            maze[7][i] = 0;
        }
        for (int i = 10; i <= 20; i++) {
            maze[i][12] = 0;
        }
        for (int i = 12; i <= 23; i++) {
            maze[20][i] = 0;
        }
        for (int i = 20; i <= 20; i++) {
            maze[i][23] = 0;
        }
        for (int i = 4; i <= 20; i++) {
            maze[i][20] = 0;
        }
        for (int i = 10; i <= 28; i++) {
            maze[i][22] = 0;
        }
        for (int i = 22; i <= 29; i++) {
            maze[28][i] = 0;
        }
        maze[8][12] = 0;
        maze[9][12] = 0;
        maze[9][13] = 0;
        maze[9][14] = 0;

        maze30(maze);
        break;
    }
    default: {
        cout << "Некорректный ввод, попробуйте заново.";
        break;
    }
    }


}

