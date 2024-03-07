#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int number;
    int product = 1;

    cout << "Enter a number: ";
    cin >> number;

    for (int i = 1; i <= 30; ++i) {

        cout <<  setw(5) << number * i;
        if ( i % 10 == 0) {
            cout << endl;
        }
    }


    return 0;
}

