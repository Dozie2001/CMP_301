// This program is charged with making a function that imitates
/* t computes the regular payments on a loan e.g. a car loan. Given the principal, the length of time, numbers of payment per year, and the interest rate, the program will compute the payent. To compute the payment, you should use the following formula:
*/
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Function declaration
double payment(double principal, double intRate, double PayPerYear, double years);

int main () {
    double principal, intRate, PayPerYear, years;
    double pay;
    cout << "Enter Principal: ";
    cin >> principal;
    cout << "Enter Your Interest Rate: ";
    cin >> intRate;
    cout << "Enter your PayPerYear: ";
    cin >> PayPerYear;
    cout << "Enter number of years: ";
    cin >> years;
    pay = payment(principal, intRate, PayPerYear, years);

    cout << "The pay is: " << fixed << setprecision(2) << pay << endl;
    return 0;

}

double payment(double principal, double intRate, double PayPerYear, double years) {
    double numer =  (intRate * principal) / PayPerYear;
    double b = (intRate / PayPerYear) + 1;
    double e = - (PayPerYear * years);
    double denom =  1 - pow((1 + intRate / PayPerYear), -PayPerYear * years);
    double pay =  numer/denom;

    return pay;
}
