#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vec vector
#define pb push_back
#define ins insert
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define readintvec(v) for(int &x: v) scanf("%d", &x)
#define MOD (int)(1e9+7)
int inv_mod(int a, int b){return(a>1?b-inv_mod(b%a,a)*b/a:1);}
unsigned int factorial(unsigned int n){int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

ll int m;

void solve() {
    for (ll int i = 0; i < m; i++) {
        cout << m*(m-1) + 2*i + 1;
        if (i != m-1) cout << ' ';
        else cout << '\n';
    }
}

int main() {
    cin >> m;
    
    solve();


    return 0;
}