#include <iostream>

using namespace std;

int main() {
    int P, R;
    char path;
    cin >> P;
    cin >> R;
    
    if (P == 0) {
        path = 'C';
    } else if (P == 1) {
        if (R == 0) {
            path = 'B';
        } else if (R == 1) {
            path = 'A';
        }
    }

    cout << path << endl;

    return 0;
}
