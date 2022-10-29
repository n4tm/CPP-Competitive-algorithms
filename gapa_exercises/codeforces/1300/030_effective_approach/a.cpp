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
#define toupper(s) transform(all(s), s.begin(), ::toupper)
#define tolower(s) transform(all(s), s.begin(), ::tolower)
#define readvec(v) for(auto &x: v) cin >> x;
#define MOD (int)(1e9+7)
int inv_mod(int a, int b){return(a>1?b-inv_mod(b%a,a)*b/a:1);}
unsigned int factorial(unsigned int n){int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

ll int n, m, ans1, ans2, mpi;;
map<ll int, ll int> mp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 1; i<=n; i++) {
        cin >> mpi;
        mp[mpi]=i;
    }
    cin >> m;
    vec<ll int> q(m); readvec(q);
    for (ll int i = 0; i < m; i++) {
        ans1 += mp[q[i]];
        ans2 += n-mp[q[i]]+1;
    }
    cout << ans1 << ' ' << ans2 << endl;
    
    return 0;
}