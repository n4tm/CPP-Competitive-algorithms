#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define oo 1e+9
#define debug(var) cerr << #var << " = " << var << endl;
#define N 11001001
 
int n, m, aux;
 
int next_prime(int na) {
    for (int i = 2; i <= (int)sqrt(na); i++) {
        if (na % i == 0) return next_prime(++na);
    }
    return na;
}
 
signed main () {
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    if (next_prime(n+1) != m) cout << "NO" << '\n';
    else cout << "YES" << '\n';
 
    return 0;
}