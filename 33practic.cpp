#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

#ifdef _WIN32
#define CLEAR_COMMAND "cls"
#else
#define CLEAR_COMMAND "clear"
#endif

using namespace std;

vector<int> vec;

void clearConsole() {
    system(CLEAR_COMMAND);
}

void fillVectorManually() {
    vec.clear();
    int value;
    while (true) {
        cout << "Enter a number (0 to finish): ";
        cin >> value;
        if (value == 0) break;
        vec.push_back(value);
    }
    cout << "Vector filled.\n";
}

void printVector() {
    cout << "[ # ] Result:\t";
    for (int v : vec) {
        cout << v << "\t";
    }
    cout << "\n";
}

void sortAscending() {
    sort(vec.begin(), vec.end());
    cout << "Sorted ascending:\n";
    printVector();
}

void sortDescending() {
    sort(vec.begin(), vec.end(), greater<int>());
    cout << "Sorted descending:\n";
    printVector();
}

void multiplyVector() {
    if (vec.empty()) {
        cout << "Vector is empty.\n";
        return;
    }
    long long product = 1;
    for (int v : vec) {
        product *= v;
    }
    cout << "Product of vector elements: " << product << "\n";
}

void sumVector() {
    if (vec.empty()) {
        cout << "Vector is empty.\n";
        return;
    }
    long long sum = 0;
    for (int v : vec) {
        sum += v;
    }
    cout << "Sum of vector elements: " << sum << "\n";
}

void divideVector() {
    if (vec.empty()) {
        cout << "Vector is empty.\n";
        return;
    }
    double result = static_cast<double>(vec[0]);
    for (size_t i = 1; i < vec.size(); ++i) {
        if (vec[i] == 0) {
            cout << "Division by zero encountered at element " << i << ". Operation aborted.\n";
            return;
        }
        result /= vec[i];
    }
    cout << "Result of division of vector elements: " << result << "\n";
}

void resetVector() {
    vec.clear();
    cout << "Vector has been reset (emptied).\n";
}

int main() {
    int choice;
    bool exitProgram = false;

    while (!exitProgram) {
        clearConsole();
        cout << "[ # ] Vector Operations\n";
        cout << "[ 1 ] Fill numbers manually\n";
        cout << "[ 2 ] Sort ascending\n";
        cout << "[ 3 ] Sort descending\n";
        cout << "[ 4 ] Multiply vector\n";
        cout << "[ 5 ] Sum vector\n";
        cout << "[ 6 ] Divide vector\n";
        cout << "[ 7 ] Clear vector\n";
        cout << "[ 0 ] Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            clearConsole();
            fillVectorManually();
            printVector();
            cout << "Press Enter to continue...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
        case 2:
            if (vec.empty()) {
                cout << "Vector is empty.\n";
            }
            else {
                sortAscending();
            }
            cout << "Press Enter to continue...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
        case 3:
            if (vec.empty()) {
                cout << "Vector is empty.\n";
            }
            else {
                sortDescending();
            }
            cout << "Press Enter to continue...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
        case 4:
            multiplyVector();
            cout << "Press Enter to continue...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
        case 5:
            sumVector();
            cout << "Press Enter to continue...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
        case 6:
            divideVector();
            cout << "Press Enter to continue...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
        case 7:
            resetVector();
            cout << "Press Enter to continue...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
        case 0:
            clearConsole();
            cout << "\033[31mYou closed the program.\033[0m\n";
            exitProgram = true;
            break;
        default:
            cout << "Invalid choice.\n";
            cout << "Press Enter to continue...";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin.get();
            break;
        }
    }
    return 0;
}
