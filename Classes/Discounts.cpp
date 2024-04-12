#include <iostream> 
#include <cmath>


using namespace std;


class Discount {
    private:
    float total;
    public:

    Discount(): total(0)
    {

    }

    void setValue(){

    float totalAmount;
    cout << "Enter totalAmount: ";
    cin >> totalAmount;

    total = totalAmount;

    }

    float getValue() {
        return total;
    }
    float discount() {
        float totalAmount = getValue();
        if (totalAmount <= 100) {
            return 0;
        }
        else if (totalAmount > 100 && totalAmount <= 200)
        {
            return totalAmount * 0.05;
        }

        else if (totalAmount > 200 && totalAmount <= 400)
        {
            return totalAmount * 0.1;
        }

        else if (totalAmount > 400  && totalAmount <= 800)

        {
            return totalAmount * 0.2;
        }

        else {
            return totalAmount * 0.25;
        }
        
        
    }
    
};

int main(){
    float discAmount, finalAmount;

    Discount newTable;

    newTable.setValue();
    finalAmount = newTable.getValue();

    discAmount = newTable.discount();

    finalAmount = finalAmount - discAmount;

    cout << "The Price to be paid after applying discount: " << finalAmount << endl;
    return 0;
}