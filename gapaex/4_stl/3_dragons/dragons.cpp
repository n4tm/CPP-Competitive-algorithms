#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int s, n, scan_aux1, scan_aux2;
multimap<int, int> lvl;
string resp = "YES";

int main () {
    cin >> s >> n;
    for (int i = 0; i < n; i++) {
        cin >> scan_aux1 >> scan_aux2;
        lvl.insert(pair<int, int>(scan_aux1, scan_aux2));
    }

    for (auto x : lvl) {
        if (s > x.first) {
            s += x.second;
        } else {
            resp = "NO";
        }
    }
    cout << resp << '\n';

    return 0;
}