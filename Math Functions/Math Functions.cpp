// Math Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x = 64;
    double f = 15;
    cout << sqrt(x) << endl;
    cout << sqrt(100) << endl;

    cout << round(2.4) << endl;
    cout << round(2.8) << endl;
    cout << round(5.5) << endl;


    cout << round(sqrt(f)) << endl;
    cout << sqrt(f) << endl;


    cout << "X power F " << pow(x, f) << endl;
    cout << "12 power 3 " << pow(12, 3) << endl;

    cout << ceil(2.9) << endl;
    cout << ceil(-2.9) << endl;
    cout << floor(2.9) << endl;
    cout << floor(-2.9) << endl;







    return 0;
}


