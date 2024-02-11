#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int pop1=135, pop2=7290, pop3=11300, pop4=16200;
    cout << setw(4) << "1990" << setw(10) << pop1 << endl
     << setw(4) << "1991" << setw(10) << pop2 << endl
     << setw(4) << "1992" << setw(10) << pop3 << endl
     << setw(4) << "1993" << setw(10) << pop4 << endl;


    return 0;     
}