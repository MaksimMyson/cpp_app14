

#include <cmath>
#include "lib.h"

int main() {
    int num1, num2;


    cout << "Enter two numbers: ";
    cin >> num1 >> num2;


    cout << "Min: " << MIN(num1, num2) << endl;
    cout << "Max: " << MAX(num1, num2) << endl;
    cout << "Square of num1: " << SQUARE(num1) << endl;
    cout << "Enter a power: ";

    int power;
    cin >> power;
    cout << num1 << " raised to the power " << power << ": " << POWER(num1, power) << endl;

    cout << num1 << " is " << (IS_EVEN(num1) ? "even" : "odd") << endl;
    cout << num2 << " is " << (IS_ODD(num2) ? "odd" : "even") << endl;
   
    return 0;
}
