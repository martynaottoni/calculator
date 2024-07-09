#include <iostream>
#include <cstdlib> 

using namespace std;

void showMenu() {
    cout << "--------------------" << endl;
    cout << "  Calculator  " << endl;
    cout << "--------------------" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Conversion" << endl;
    cout << "6. Exit" << endl;
    cout << "--------------------" << endl;
    cout << "Choose option: ";
}

void showConversionMenu() {
    cout << "--------------------" << endl;
    cout << "  Conversion Menu  " << endl;
    cout << "--------------------" << endl;
    cout << "1. Meters to Centimeters" << endl;
    cout << "2. Centimeters to Meters" << endl;
    cout << "3. Kilometers to Meters" << endl;
    cout << "4. Meters to Kilometers" << endl;
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

double metersToCentimeters(double a) {
    return a * 100;
}

double centimetersToMeters(double a) {
    return a / 100;
}

double kilometersToMeters(double a) {
    return a * 1000;
}

double metersToKilometers(double a) {
    return a / 1000;
}

int main() {
    int option;
    double num1, num2;

    while (true) {
        showMenu();
        cin >> option;

        if (option == 6) {
            cout << "Exit" << endl;
            break;
        }

        if (option == 5) {
            showConversionMenu();
            int conversionOption;
            cin >> conversionOption;

            cout << "Enter the number to convert: ";
            cin >> num1;

            switch (conversionOption) {
            case 1:
                cout << "Result: " << metersToCentimeters(num1) << " cm" << endl;
                break;
            case 2:
                cout << "Result: " << centimetersToMeters(num1) << " m" << endl;
                break;
            case 3:
                cout << "Result: " << kilometersToMeters(num1) << " m" << endl;
                break;
            case 4:
                cout << "Result: " << metersToKilometers(num1) << " km" << endl;
                break;
            default:
                cout << "Error. Try again. " << endl;
            }
            continue; // Skip the rest of the loop and show the main menu again
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