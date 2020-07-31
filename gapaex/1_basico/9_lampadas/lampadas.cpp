#include <iostream>
using namespace std;

int main() {
    int N;
    int I[100002];
    bool A = 0;
    bool B = 0;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> I[i];
        if (I[i] == 1) {
            A? A = 0 : A = 1;
        } else if (I[i] == 2) {
            A? A = 0 : A = 1;
            B? B = 0 : B = 1;
        }
    }
    cout << A << '\n' << B << '\n';

    return 0;
}