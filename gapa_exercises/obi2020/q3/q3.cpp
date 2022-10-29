#include <iostream>
using namespace std;


int n, p, m, num, mcont, pcont;
char ans = 'S';

int main () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num == 1) {
            pcont++;
        } else {
            mcont++;
        }
    }
    cin >> p >> m;
    if (m != mcont || p != pcont) {
        ans = 'N';
    }
    cout << ans << '\n';

    return 0;
}