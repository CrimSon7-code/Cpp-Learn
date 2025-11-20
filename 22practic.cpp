#include <iostream>
using namespace std;

int main()
{
    int arrI[10] = { 40,70,50,0,36,88,53,76,23,19 };
    short arrSH[10] = { 12,3,5,6,8,5,9,22,88,7 };
    long arrL[10] = {111,222,333,444,555,666,777,888,999,134454636};
    char arrC[10] = { 'A','d','h','O','(','4','+','%','8','7' };
    float arrF[10] = { 12.09,3.0,6,6.9,566,78.89,889.2,0.001,0,111.111 };
    double arrD[10] = { 134.234,4.5642,6.7,77.997,444,8,67.6,0.0000005,5,55.55 };
    string arrS[10] = { "^&","JOE","67","N","v","6((","Are","7hh","youuuuuuuuuuu","1" };
    bool arrB[10] = { 1,0,0,0,1,0,1,1,1,0 };

    for (int i = 0; i != 10; i++) {
        cout << "arrSH[" << i << "] " << "|| " << "value: " << arrI[i] << endl;
    }cout << endl;
    for (int i = 0; i != 10; i++) {
        cout << "arrL[" << i << "] " << "|| " << "value: " << arrL[i] << endl;
    }cout << endl;
    for (int i = 0; i != 10; i++) {
        cout << "arrC[" << i << "] " << "|| " << "value: " << arrC[i] << endl;
    }cout << endl;
    for (int i = 0; i != 10; i++) {
        cout << "arrF[" << i << "] " << "|| " << "value: " << arrF[i] << endl;
    }cout << endl;
    for (int i = 0; i != 10; i++) {
        cout << "arrD[" << i << "] " << "|| " << "value: " << arrD[i] << endl;
    } cout << endl;
    for (int i = 0; i != 10; i++) {
        cout << "arrS[" << i << "] " << "|| " << "value: " << arrS[i] << endl;
    }   cout << endl;
    for (int i = 0; i != 10; i++) {
        cout << "arrB[" << i << "] " << "|| " << "value: " << arrB[i] << endl;
    }cout << endl;
}

