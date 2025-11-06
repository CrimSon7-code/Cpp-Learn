#include <iostream>
using namespace std;
int main()
{
    float num1;
    float num2;
    string operation;
    cout << "Input the first number" << endl;
    cin >> num1;
    cout << "Input the symbol of the operation, you can use: +, -, *, /, %"<<endl;
    cin >> operation;
    cout << "Input the second number"<<endl;
    cin >> num2;
    if (operation == "*") {
        cout << num1 << operation << num2<<" = "<<num1*num2<<endl;
    }
    else if (operation == "+") {
        cout << num1 << operation << num2 << " = " << num1 + num2 << endl;
    }
    else if (operation == "-") {
        cout << num1 << operation << num2 << " = " << num1 - num2 << endl;
    }

    else if (operation == "/") {
        if (num2 == 0) {
            cout << "you can't divide by zero"  << endl;

        }
        else {
            cout << num1 << operation << num2 << " = " << num1 / num2 << endl;
        }
    }
    else if (operation == "%") {
        if (num2 == 0) {
            cout <<"you can't divide by zero" << endl;
        }
        else {
            cout << num1 << operation << num2 << " = " << num1 % num2 << endl;
        }
    }
    
}
