#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli n, k, scan_aux;
vector<lli> v;
set<lli> s;

int main () {
    scanf("%lld %lld", &n, &k);
    for (int i = 0; i < n; i++) {
        scanf("%lld", &scan_aux);
        v.push_back(scan_aux);
    }
    auto l = v.begin();
    auto r = v.end();
    sort(l, r);
    for (auto x : v) {
        if (x % k != 0) {
            s.insert(x);
        } else {
           if (s.find(x/k) == s.end()) {
                s.insert(x);
           }
        }
    }
    
    printf("%ld\n", s.size());
    
    return 0;
}