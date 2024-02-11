#include <iostream>

using namespace std;

int main() {

    const double one_gallon = 7.481;

    double first_gallon;
    cout << "Enter the amout of gallons to convert " << endl;
    cin >> first_gallon;
    double cubic_feet = first_gallon / one_gallon;
    cout << cubic_feet << endl;

    return 0;
}