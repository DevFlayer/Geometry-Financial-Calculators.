#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double pow(double x);

int main() {
    double  principal, taxa = 0.01, time,montante;

    cout << "----Welcome to the financial calculator---:" << endl;

    cout << "Enter your principal investment: ";
    cin >> principal;

    cout << "For how long would you like to invest?: ";
    cin >> time;

    montante = principal * pow((1 + taxa), time);

    cout << fixed << setprecision(2);
    cout << "Your Investment will be:$"  << montante <<endl;
    cout << "-------------------------------" << endl;

    return 0;
}


// A Calculator based in 1% of tax//
// Feel free to use //
//
// Created by Vinicius H on 12/03/2026.
//