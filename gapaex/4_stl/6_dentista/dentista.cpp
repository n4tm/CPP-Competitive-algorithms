#include <iostream>
#include <map>

using namespace std;

int n, scan_aux1, scan_aux2, ans;
multimap<int, int> m;
multimap<int, int> m2;
int main () {
    cin >> n;
    ans = n;
    for (int i = 0; i < n; i++) {
        cin >> scan_aux1 >> scan_aux2;
        m.insert(pair<int, int> (scan_aux1, scan_aux2));
    }
    for (auto it : m) {
        m2.insert({it.second, it.first});
    }
    auto it1 = m2.begin();
    auto it2 = next(it1);
    auto end = m2.end();
    while (it2 != end) {
        if ((it2 -> second) < (it1 -> first)) {
            m2.erase(it2);
            ans--;
        } else {
            it1++;
        }
        it2 = next(it1);
    }
    cout << ans << '\n';

    return 0;
}