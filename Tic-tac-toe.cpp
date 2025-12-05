#include <iostream>
#include<windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

string player1_name = "Player 1";
string player2_name = "Player 2";
int player1_w = 0;
int player2_w = 0;
int player1_l = 0;
int player2_l = 0;
int computer_l = 0;
int computer_w = 0;
int computer_d = 0;
int player1_d = 0;
int player2_d = 0;
string figure1 = "X";
string figure2 = "O";
string p1_color = "\x1b[94m";
string p2_color = "\x1b[91m";
string res_color = "\x1b[0m";
const int size_of_board = 3;

void statistic() {
    system("cls");
    cout << "  |\x1b[4m Statistic\x1b[0m:\n";
    cout << "  |                      "<< "\x1b[32m W \x1b[0m"<< "   \x1b[31m L \x1b[0m"<< "   \x1b[22m D \x1b[0m"                 <<endl;
    cout << "1 | " << player1_name<<"              "<<player1_w<<"     "<< player1_l<<"     "<<player1_d << endl << endl;
    cout << "2 | " << player2_name << "              " << player2_w << "     " << player2_l << "     " << player2_d << endl<<endl;
    cout << "3 | Computer" << "              " << computer_w << "     " << computer_l << "     " << computer_d <<endl;
    system("pause");
}

void settings() {
    system("cls");
    int settings_choice;
    bool is_sExit = false;
    while (!is_sExit) {
        system("cls");
        cout << "  |\x1b[4m Player settings\x1b[0m:\n";
        cout << "1 | " << player1_name << endl;
        cout << "2 | " << player2_name << endl;
        cout << "3 | Back to menu\n";
        cout << "> | Input: ";
        cin >> settings_choice;
        switch (settings_choice) {
        case 1: {
            system("cls");
            
            cout << " | " << player1_name << "\x1b[4m settings\x1b[0m:\n";
            cout << "1 | " << "nickname   :" << player1_name << endl;
            cout << "2 | " << "figure     :" << figure1 << endl;
            cout << "3 | " << "color      :";
            
            cout <<p1_color<< "Example"<<res_color << endl;
            
            cout << "4 | Back to menu\n";
            cout << "> | Input: ";
            int player1_s;
            cin >> player1_s;
            switch (player1_s) {
                case 1: {
                    cout<<"\nEnter the new nickname: ";
                    cin >> player1_name;
                    break;
                    }
                case 2: {
                    cout << "\nEnter the new figure: ";
                    cin >> figure1;
                    break;
                }
                case 3: {
                    system("cls");
                    int color_choice;
                    cout << "1. RED\n2. GREEN\n3. PURPLE\n4. BLUE\n5. YELLOW\n";
                    cout << "Enter the new color: ";
                    cin >> color_choice;
                    switch (color_choice) {
                    case 1:p1_color = "\x1b[91m"; break;
                    case 2:p1_color = "\x1b[92m"; break;
                    case 3:p1_color = "\x1b[95m"; break;
                    case 4:p1_color = "\x1b[94m"; break;
                    case 5:p1_color = "\x1b[93m"; break;
                    default:cout << "color not found."; break;
                    }
                    break;
                }
                case 4: {
                    break;
                }
                default: {
                    cout << "Incorrect Input!";
                    system("sleep");
                    break;
                }
            }
            break;
        }
        case 2: {
            system("cls");

            cout << " | " << player2_name << "\x1b[4m settings\x1b[0m:\n";
            cout << "1 | " << "nickname   :" << player2_name << endl;
            cout << "2 | " << "figure     :" << figure2 << endl;
            cout << "3 | " << "color      :";
            
            cout <<p2_color<< "Example"<<res_color << endl;

            cout << "4 | Back to menu\n";
            cout << "> | Input: ";
            int player2_s;
            cin >> player2_s;
            switch (player2_s) {
            case 1: {
                cout << "\nEnter the new nickname: ";
                cin >> player2_name;
                break;
            }
            case 2: {
                cout << "\nEnter the new figure: ";
                cin >> figure2;
                break;
            }
            case 3: {
                system("cls");
                int color_choice;
                cout << "1. RED\n2. GREEN\n3. PURPLE\n4. BLUE\n5. YELLOW\n";
                cout << "Enter the new color: ";
                cin >> color_choice;
                switch (color_choice) {
                case 1:p2_color = "\x1b[91m"; break;
                case 2:p2_color = "\x1b[92m"; break;
                case 3:p2_color = "\x1b[95m"; break;
                case 4:p2_color = "\x1b[94m"; break;
                case 5:p2_color = "\x1b[93m"; break;
                default:cout << "color not found."; break;
                }
                break;
            }
            case 4: {
                break;
            }
            default: {
                cout << "Incorrect Input!";
                system("sleep");
                break;
            }
            }
            break;
        }
        case 3: {
            system("cls");
            is_sExit = true;
            break;
        }
        default: {
            cout << "Incorrect Input!";
            system("pause");
            break;
        }
        }
    }
}
char board[size_of_board][size_of_board];
void printBoard() {
    cout << "\n";
    for (int i = 0; i < size_of_board; i++) {
        cout << " ";
        for (int j = 0; j < size_of_board; j++) {
            cout << " " << board[i][j] << " ";
            if (j < size_of_board - 1) cout << "|";
        }
        cout << "\n";
        if (i < size_of_board - 1) cout << " ---+---+---\n";
    }
    cout << "\n";
}
bool isWin(char mark) {
    for (int i = 0; i < size_of_board; i++)
        if (board[i][0] == mark && board[i][1] == mark && board[i][2] == mark)
            return true;
    for (int j = 0; j < size_of_board; j++)
        if (board[0][j] == mark && board[1][j] == mark && board[2][j] == mark)
            return true;
    if (board[0][0] == mark && board[1][1] == mark && board[2][2] == mark)
        return true;
    if (board[0][2] == mark && board[1][1] == mark && board[2][0] == mark)
        return true;
    return false;
}
bool isDraw() {
    for (int i = 0; i < size_of_board; i++)
        for (int j = 0; j < size_of_board; j++)
            if (board[i][j] == ' ')
                return false;
    return true;
}
void resetBoard() {
    for (int i = 0; i < size_of_board; i++)
        for (int j = 0; j < size_of_board; j++)
            board[i][j] = ' ';
}
pair<int, int> getPlayerMove() {
    int row, col;
    while (true) {
        cout << "Input the row (1-3): ";
        cin >> row;
        cout << "Input the column (1-3): ";
        cin >> col;
        if (row >= 1 && row <= 3 && col >= 1 && col <= 3) {
            if (board[row - 1][col - 1] == ' ') {
                return { row - 1, col - 1 };
            }
            else {
                cout << "This cell is occupied. Try again.\n";
            }
        }
        else {
            cout << "Incorrect input.\n";
        }
    }
}
pair<int, int> getComputerMove() {
    int freeCells[size_of_board * size_of_board][2];
    int count = 0;
    for (int i = 0; i < size_of_board; i++)
        for (int j = 0; j < size_of_board; j++)
            if (board[i][j] == ' ') {
                freeCells[count][0] = i;
                freeCells[count][1] = j;
                count++;
            }
    if (count > 0) {
        int index = rand() % count;
        return { freeCells[index][0], freeCells[index][1] };
    }
    return { -1, -1 };
}

void game_2p(){
    resetBoard();
    bool gameOver = false;
    bool player1Turn = true;

    while (!gameOver) {
        printBoard();
        if (player1Turn) {
            cout << player1_name << "'s turn (" << figure1 << ")\n";
            auto move = getPlayerMove();
            int row = move.first;
            int col = move.second;
            board[row][col] = figure1[0];
        }
        else {
            cout << player2_name << "'s turn (" << figure2 << ")\n";
            auto move = getPlayerMove();
            int row = move.first;
            int col = move.second;
            board[row][col] = figure2[0];
        }

        if (isWin(figure1[0])) {
            printBoard();
            cout << player1_name << " win!\n";
            player1_w++; player2_l++;
            system("pause");
            break;
        }
        else if (isWin(figure2[0])) {
            printBoard();
            cout << player2_name << " win!\n";
            player1_l++; player2_w++;
            system("pause");
            break;
        }
        else if (isDraw()) {
            printBoard();
            cout << "Draw!\n";
            player1_d++; player2_d++;
            system("pause");
            break;
        }

        player1Turn = !player1Turn;
    }
}

void game_single() {
    resetBoard();
    bool playerTurn = true;
    bool is_exit = false;

    
    int turn_start = rand() % 2;

    while (!is_exit) {
        printBoard();

        if (playerTurn) {
            cout << "Your turn (" << figure1 << ")\n";
            auto move = getPlayerMove();
            int row = move.first;
            int col = move.second;
            board[row][col] = figure1[0]; 
        }
        else {
            cout << "Computer's turn (" << figure2 << ")\n";
            auto move = getComputerMove();
            int row = move.first;
            int col = move.second;
            if (row != -1 && col != -1)
                board[row][col] = figure2[0]; 
        }

       
        if (isWin(figure1[0])) {
            printBoard();
            cout << "You win!\n";
            system("pause");
            player1_w++; computer_l++;
            break;
        }
        else if (isWin(figure2[0])) {
            printBoard();
            cout << "Computer win!\n";
            system("pause");
            player1_l++; computer_w++;
            break;
        }
        else if (isDraw()) {
            printBoard();
            cout << "Draw!\n";
            system("pause");
            player1_d++; computer_d++;
            break;
        }

        playerTurn = !playerTurn;
    }
}
void game() {
    int game_s_choice;
    bool is_gExit = false;
    while (!is_gExit) {
        system("cls");
        cout << "  |\x1b[4m Tic-tact-toe\x1b[0m:\n\n";
        cout << "1 | Single game\n" << "2 | Two players\n\n" << "0 | Back to menu\n\n" << "> Input: ";
        cin >> game_s_choice;
        switch (game_s_choice) {
        case 1:game_single(); break;
        case 2:game_2p(); break;
        case 0:is_gExit = true; break;
        default: cout << "Incorrect input!"; break;
        }
    }
}
void main_menu() {
    bool is_exit = false;

    while (!is_exit) {
        system("cls");
        cout << "Tic-tac-toe game\n\nMenu:\n(1) Start Game\n(2) Statistic\n(3) Settings\n(4) Exit" << endl;
        int main_menu_choice;
        cout << " > Input: ";
        cin >> main_menu_choice;
        switch (main_menu_choice) {
        case 1: {
            system("cls");
            game();
            system("pause");
            break;
        }
        case 2:{
            
            statistic();
            break;
        }
        case 3:{
            
            settings();
            break;
        }
        case 4:{
            system("cls");
            
            is_exit = true;
            system("pause");
        }
        default: {
            system("cls");
            cout << "incorrect input!";
            system("pause");
            break;
        }
        }
    }
}




int main()
{
    main_menu();
}

