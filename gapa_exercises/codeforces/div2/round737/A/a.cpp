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
#define readintvec(v) for(int &x: v) cin >> x;
#define MOD (int)(1e9+7)
int inv_mod(int a, int b){return(a>1?b-inv_mod(b%a,a)*b/a:1);}
unsigned int factorial(unsigned int n){int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

int t, n, ai;
double ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        double amount = 0.0;
        vector<int> v(n); readintvec(v);
        sort(all(v));
        for (int i = 0; i < sz(v)-1; i++) amount += v[i];
        ans = (double)amount/(sz(v)-1) + v[sz(v)-1];
        cout << fixed;
        cout << setprecision(9) << ans << endl;
    }
    
    
    return 0;
}