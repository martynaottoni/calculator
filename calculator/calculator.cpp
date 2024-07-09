// calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void showMenu() {
    cout << "--------------------" << endl;
    cout << "  Calculator  " << endl;
    cout << "--------------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cout << "--------------------" << endl;
    cout << "Choose option: ";
}

double addition(double a, double b) {
    return a + b;
}

double subtraction(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        cout << "Error: division by 0!" << endl;
        return 0;
    }
}

int main() {
    int option;
    double num1, num2;

    while (true) {
        showMenu();
        cin >> option;

        if (option == 5) {
            cout << "Exit" << endl;
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (option) {
        case 1:
            cout << "Result: " << addition(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << subtraction(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << multiplication(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << division(num1, num2) << endl;
            break;
        default:
            cout << "Error. Try again. " << endl;
        }
    }

    return 0;
}