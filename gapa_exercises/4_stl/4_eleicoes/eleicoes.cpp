#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int n, scan_aux, win, bigger1 = 0, bigger2 = -1;
vector<int> a;

int main () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> scan_aux;
        a.push_back(scan_aux);
    }
    sort(a.begin(), a.end());
    for (int i = 1; i <= n; i++) {
        if (a[i-1] == a[i]) {
            bigger1++;
        } else {
            if (bigger2 < bigger1) {
                bigger2 = bigger1;
                win = a[i-1];
            }
            bigger1 = 0;
        }
    }

    cout << win << '\n';
    return 0;
}