#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> vectorInt;
    vectorInt.push_back(2);
    vectorInt.push_back(567);
    vectorInt.push_back(80);
    vectorInt.push_back(27);
    vectorInt.push_back(7);
    vectorInt.push_back(0);
    vectorInt.push_back(7689);
    vectorInt.push_back(-12);
    vectorInt.push_back(-556);
    vectorInt.push_back(-2);

    vector <float> vectorFloat;
    vectorFloat.push_back(2.5);
    vectorFloat.push_back(567.7);
    vectorFloat.push_back(80.78);
    vectorFloat.push_back(27.3);
    vectorFloat.push_back(7.908);
    vectorFloat.push_back(0);
    vectorFloat.push_back(7689.456778);
    vectorFloat.push_back(-12.8);
    vectorFloat.push_back(-556);
    vectorFloat.push_back(-2);

    vector <short> vectorShort;
    vectorShort.push_back(2);
    vectorShort.push_back(567);
    vectorShort.push_back(80);
    vectorShort.push_back(27);
    vectorShort.push_back(7);
    vectorShort.push_back(0);
    vectorShort.push_back(7689);
    vectorShort.push_back(-12);
    vectorShort.push_back(-556);
    vectorShort.push_back(-2);

    vector <long> vectorLong;
    vectorLong.push_back(2);
    vectorLong.push_back(567);
    vectorLong.push_back(80);
    vectorLong.push_back(27);
    vectorLong.push_back(7);
    vectorLong.push_back(0);
    vectorLong.push_back(7689);
    vectorLong.push_back(-12);
    vectorLong.push_back(-556);
    vectorLong.push_back(-2);

    vector <double> vectorDouble;
    vectorDouble.push_back(2);
    vectorDouble.push_back(567);
    vectorDouble.push_back(80);
    vectorDouble.push_back(27);
    vectorDouble.push_back(7);
    vectorDouble.push_back(0);
    vectorDouble.push_back(7689);
    vectorDouble.push_back(-12);
    vectorDouble.push_back(-556);
    vectorDouble.push_back(-2);

    vector <char> vectorChar;
    vectorChar.push_back('A');
    vectorChar.push_back('1');
    vectorChar.push_back('b');
    vectorChar.push_back('%');
    vectorChar.push_back('!');
    vectorChar.push_back('.');
    vectorChar.push_back('Y');
    vectorChar.push_back(')');
    vectorChar.push_back('-');
    vectorChar.push_back('`');

    vector <bool> vectorBool;
    vectorBool.push_back(0);
    vectorBool.push_back(0);
    vectorBool.push_back(1);
    vectorBool.push_back(0);
    vectorBool.push_back(1);
    vectorBool.push_back(1);
    vectorBool.push_back(1);
    vectorBool.push_back(0);
    vectorBool.push_back(0);
    vectorBool.push_back(1);

    vector <string> vectorString;
    vectorString.push_back("abc");
    vectorString.push_back("a");
    vectorString.push_back("ab");
    vectorString.push_back("A");
    vectorString.push_back("B!");
    vectorString.push_back("BGrf@2");
    vectorString.push_back("-");
    vectorString.push_back("-1");
    vectorString.push_back("-!");
    vectorString.push_back("Ac!23");


    for (int i = 0; i != 8; i++) {
        cout << "Vector INT:" << endl;
        cout << "vectorInt[" << i << "] | value: " << vectorInt[i] << endl<<endl;
    }
    for (int i = 0; i != 8; i++) {
        cout << "Vector FLOAT:" << endl;
        cout << "vectorFloat[" << i << "] | value: " << vectorFloat[i] << endl<<endl;
    }
    for (int i = 0; i != 8; i++) {
        cout << "Vector DOUBLE:" << endl;
        cout << "vectorDouble[" << i << "] | value: " << vectorDouble[i] << endl<<endl;
    }
    for (int i = 0; i != 8; i++) {
        cout << "Vector SHORT:" << endl;
        cout << "vectorShort[" << i << "] | value: " << vectorShort[i] << endl<<endl;
    }
    for (int i = 0; i != 8; i++) {
        cout << "Vector LONG:" << endl;
        cout << "vectorInt[" << i << "] | value: " << vectorInt[i] << endl<<endl;
    }
    for (int i = 0; i != 8; i++) {
        cout << "Vector CHAR:" << endl;
        cout << "vectorChar[" << i << "] | value: " << vectorChar[i] << endl<<endl;
    }
    for (int i = 0; i != 8; i++) {
        cout << "Vector BOOL:" << endl;
        cout << "vectorBool[" << i << "] | value: " << vectorBool[i] << endl<<endl;
    }
    for (int i = 0; i != 8; i++) {
        cout << "Vector STRING:" << endl;
        cout << "vectorString[" << i << "] | value: " << vectorString[i] << endl<<endl;
    }

}


