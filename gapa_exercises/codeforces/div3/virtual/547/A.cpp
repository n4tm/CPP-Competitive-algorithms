#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define uint unsigned int
#define vec vector
#define pb push_back
#define ins insert
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define len(s) (int)(s).length()
#define toupper(s) transform(all(s), s.begin(), ::toupper)
#define tolower(s) transform(all(s), s.begin(), ::toupper)
#define readvec(v) for(auto &x: v) cin >> x;
#define MOD (int)(1e9+7)
uint factorial(uint n){uint ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

int n, m, k=1, j=1, ans;

void countDivisors(int* d, int num) {
    while (*d%num == 0) {
        *d/=num;
        ans++;
    }
}

void solve() {
    cin >> n >> m;
    if (m%n != 0) ans = -1;
    else {
        int d = m/n;
        countDivisors(&d, 2);
        countDivisors(&d, 3);
        if (d != 1) ans = -1;
    }
    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    
    return 0;
}