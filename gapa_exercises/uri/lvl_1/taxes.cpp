#include <iostream>
#include <stdlib.h>
 
using namespace std;

double value, tax = 0;

int main() {
    cin >> value;
    if (value - 4500 > 0) {
        tax += (value - 4500)*0.28;
        value -= (value - 4500);
    } if (value - 3000 > 0) {
        tax += (value - 3000)*0.18;
        value -= (value - 3000);
    } if (value - 2000 > 0) {
        tax += (value - 2000)*0.08;
        value -= (value - 2000);
    } else {
        tax = 0;
    }
    if (tax == 0) {
        cout << "Isento" << '\n';
    } else {
        printf("R$ %.2f\n", tax);
    }
    
    return 0;
}
