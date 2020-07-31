#include <iostream>
using namespace std;

int main() {
    unsigned short int H, P, F;
    short int D;
    char resp;
    cin >> H >> P >> F >> D;
    if ((H < F && F < P) || (P < H && H < F) || (H > P && P > F)) {
        (D == -1)? resp = 'S' : resp = 'N';
        cout << resp << endl;
    }
    else {
        (D == 1)? resp = 'S' : resp = 'N';
        cout << resp << endl;
    }

    return 0;
}