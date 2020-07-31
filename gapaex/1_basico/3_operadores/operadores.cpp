#include <iostream>
using namespace std;

int main() {
    int x;
    string res = "nulo";

    cin >> x;
    
    if (x > 0) {
        res = "positivo";
    } else if (x < 0) {
        res = "negativo";
    }
    cout << res << "\n";

    return 0;
}