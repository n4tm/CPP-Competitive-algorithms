#include <iostream>

using namespace std;

int main() {
    int X, Y;
    cin >> X;
    cin >> Y;

    for (int i = 1; i <= Y; i++) {
        if ((i % X) != 0) {
            cout << i << " ";
        } else {
            cout << i << endl;
        }
    }
    
    return 0;
}
