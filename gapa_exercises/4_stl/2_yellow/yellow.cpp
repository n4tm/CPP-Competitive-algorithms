#include <iostream>

using namespace std;

int n1, n2, k1, k2, shown, swap_aux, cnt, minimum, maximum;

int main () {
    cin >> n1 >> n2 >> k1 >> k2 >> shown;
    if (k1 > k2) {
        swap_aux = k1;
        k1 = k2;
        k2 = swap_aux;
        swap_aux = n1;
        n1 = n2;
        n2 = swap_aux;
    }

    cnt = n1 * (k1 - 1) + n2 * (k2 -1);
    if (cnt < 0) {
        minimum = 0;
    } else {
        minimum = shown - cnt;
    }

    if (shown <= n1 * k1) {
        maximum = (shown/k1);
    } else {
        maximum = n1 + (shown - n1*k1)/k2;
    }
    if (minimum < 0) minimum = 0;
    if (maximum < 0) maximum = 0;
    cout << minimum << ' ' << maximum << '\n';

    return 0;
}