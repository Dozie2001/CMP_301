#include <iostream>
#include <cmath>

using namespace std;

class SquarRoot {
    public:
    void even_squareRoots(){
        for(int i = 2; i < 100; i+=2) {
            cout << sqrt(i) << endl;
        }
    }
};


int main() {

    SquarRoot number;

    number.even_squareRoots();
}