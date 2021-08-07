#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define oo 1e+9
#define debug(var) cerr << #var << " = " << var << endl;
#define N 11001001

int n;
string s, aux;
bool go = true;

signed main () {
    ios_base::sync_with_stdio(0);

    cin >> n;
    while(go) {
        n++;
        s = to_string(n);
        sort(s.begin(), s.end());
        go = false;
        for (int i = 1; i < 4; i++) {
            if (s[i-1] == s[i]) {
                go = true;
                break;
            }
        }
    }
    cout << n << endl;

    return 0;
}