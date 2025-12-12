#include <cmath>
#include <iostream>
using namespace std;

void add() {
    float x;
    float y;
    cout << "Enter two numbers: " << endl;
    cin >> x >> y;
    float result = x + y;
    cout << "The result of operation: "<<x<<"+"<<y<<" = " << result << endl;
    system("pause");
}
void subt() {
    float x;
    float y;
    cout << "Enter two numbers: " << endl;
    cin >> x >> y;
    float result = x - y;
    cout << "The result of operation: " << x << "-" << y << " = " << result << endl;
    system("pause");
}
void divide() {
    float x;
    float y;
    cout << "Enter two numbers: " << endl;
    cin >> x >> y;
    float result = x / y;
    cout << "The result of operation: " << x << "/" << y << " = " << result << endl;
    system("pause");
}
void d_f_r() {
    float x;
    float y;
    cout << "Enter two numbers: " << endl;
    cin >> x >> y;
    float result = x % y;
    cout << "The result of operation: " << x << "%" << y << " = " << result << endl;
    system("pause");
}
void deg() {
    float x;
    float y;
    cout << "Enter two numbers: " << endl;
    cin >> x >> y;
    float result = pow(x , y);
    cout << "The result of operation: " << x << "^" << y << " = " << result << endl;
    system("pause");
}
void root() {
    float x;
    
    cout << "Enter number: " << endl;
    cin >> x;
    float result = sqrt(x);
    cout << "The result of operation: " << "√" << x << " = " << result << endl;
    system("pause");
}
void cube() {
    float x;

    cout << "Enter number: " << endl;
    cin >> x;
    float result = pow(x, 3);
    cout << "The result of operation: " << x<<"³" << " = " << result << endl;
    system("pause");
}
void sin() {
    float x;

    cout << "Enter number: " << endl;
    cin >> x;
    float result = sin(x);
    cout << "The result of operation: " << "sin" << x << " = " << result << endl;
    system("pause");
}
void cos() {
    float x;

    cout << "Enter number: " << endl;
    cin >> x;
    float result = cos(x);
    cout << "The result of operation: " << "cos" << x << " = " << result << endl;
    system("pause");
}

void calculator() {
    
    while(true){
        system("cls");
    cout << "\x1b[31m CALCULATOR \x1b[0m\n";
    cout << "Choose operation:\n1. Addition\n2. Subtract\n3. Divide\n4. Division from remainder\n5. Degree\n6. Root\n7. Cube\n8. Sinus\n9. Cosine\n";
    int choice;
    cout << "| Input >..";
    cin >> choice;
    switch (choice) {
    case 1:add(); break;
    case 2:subt(); break;
    case 3:divide(); break;
    case 4:d_f_r(); break;
    case 5:deg(); break;
    case 6:root(); break;
    case 7:cube(); break;
    case 8:sin(); break;
    case 9:cos(); break;
    default:cout << "Incorrect choice! Tru again.\n"; break;
    } 
    }
}
float main()
{
    calculator();
}


