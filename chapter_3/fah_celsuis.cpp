#include <iostream>
#include <iomanip>

using namespace std;

double to_faherenheit(double celsuis);
double to_celsius(double fahrenheit);

int main() {
    int answer;
    double celsius, fahn;

    cout << "Type 1 to convert Faherenheit to Celsius" << setw(6) << endl
          << " 2 to convert Celsius to Fahrenheit: ";
    cin >> answer;

    if (answer == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahn;

        celsius = to_celsius(fahn);
        cout << fixed << setprecision(2) << "In Celsius that's: " << celsius << endl;
    }


    else {
        cout << "Enter temperature in Celsuis: ";
        cin >> celsius;

        celsius = to_faherenheit(celsius);
        cout << "In Celsius that's: " << celsius << endl;

    }

    return 0;
}

double to_faherenheit(double celsuis) {
    double fahn = (celsuis * 9.0 / 5.0) + 32.0;
    return fahn;
}


double to_celsius(double fahrenheit) {
    double celsuis = (fahrenheit - 32.0) * 5.0 / 9.0;
    return celsuis;
}