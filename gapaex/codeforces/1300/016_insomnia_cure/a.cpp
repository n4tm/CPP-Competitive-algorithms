#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define oo 1e+9
#define debug(var) cerr << #var << " = " << var << endl;
#define N 110010
 
int k, l, m, n, d, sum, i;
int v[N], v2[4];
signed main () {
    ios_base::sync_with_stdio(0);
    cin >> k >> l >> m >> n >> d;
    v2[0] = k;
    v2[1] = l;
    v2[2] = m;
    v2[3] = n;
    for (int i = 1; i <= d; i++) {
        for (int j = 0; j < 4; j++) {
            if (i%v2[j] == 0) {
                sum++;
                break;
            } 
        }
    }
    cout << sum << '\n';
    return 0;
}