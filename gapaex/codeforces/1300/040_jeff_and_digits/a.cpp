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

int zeros;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int c, n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> c;
        if (c == 0) zeros++;
    }
    if (zeros == 0) {
        cout << -1 << endl;
    } else {
        if ((n-zeros) >= 9) {
            for (int i = 0; i < (n-zeros - (n-zeros)%9); ++i) cout << 5;
            for (int i = 0; i < zeros; i++) cout << 0;
            cout << endl;
        }
        else cout << 0 << endl;
    }

    
    return 0;
}
