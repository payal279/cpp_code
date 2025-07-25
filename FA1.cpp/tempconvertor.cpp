#include <iostream>
using namespace std;
int main() {
    double tempInput, celsius, fahrenheit, kelvin;
    char unit;
    cout << "Enter temperature: ";
    cin >> tempInput;
    cout << "Enter unit (C/F/K): ";
    cin >> unit;
    if (unit == 'C' || unit == 'c') {
        celsius = tempInput;
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        kelvin = celsius + 273.15;
    }
    else if (unit == 'F' || unit == 'f') {
        fahrenheit = tempInput;
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        kelvin = celsius + 273.15;
    }
    else if (unit == 'K' || unit == 'k') {
        kelvin = tempInput;
        celsius = kelvin - 273.15;
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
    }
    else {
        cout << "Invalid unit entered." << endl;
        return 1;
    }
    cout << "Celsius: " << celsius << " °C" << endl;
    cout << "Fahrenheit: " << fahrenheit << " °F" << endl;
    cout << "Kelvin: " << kelvin << " K" << endl;

    return 0;
}
