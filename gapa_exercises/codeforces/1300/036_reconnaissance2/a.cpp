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
#define len(s) (int)(s).length()
#define toupper(s) transform(all(s), s.begin(), ::toupper)
#define tolower(s) transform(all(s), s.begin(), ::tolower)
#define readvec(v) for(auto &x: v) cin >> x
#define MOD (int)(1e9+7)
int inv_mod(int a, int b){return(a>1?b-inv_mod(b%a,a)*b/a:1);}
unsigned int factorial(unsigned int n){int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

/*  */
int n, smaller;
pair<int, int> ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vec<int> a(n); readvec(a);
    for (int i = 1; i < n; i++) {
        if (i == 1) {
            smaller = abs(a[0]-a[1]);
            ans = make_pair(1, 2);    
        }
        else if (abs(a[i-1]-a[i]) < smaller) {
            ans = make_pair(i, i+1);
            smaller = abs(a[i-1]-a[i]);
        }
    }
    if (abs(a[0] - a[n-1]) < smaller) {
        ans = make_pair(1, sz(a));
    }
    
    cout << ans.first << ' ' << ans.second << endl;
    
    return 0;
}