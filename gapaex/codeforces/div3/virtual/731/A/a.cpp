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

int t, xa, xb, xf, ya, yb, yf, ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> t;

    for (int i = 0 ; i < t; i++) {
        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xf >> yf;
        
        ans = abs(xa - xb) + abs(ya - yb);
        if (xf == xa && xf == xb) {
            if (ya > yb && yf < ya && yf > yb) ans+=2;
            else if (ya < yb && yf < yb && yf > ya) ans+=2;
        }
        else if (yf == ya && yf == yb)
            if (xa > xb && xf < xa && xf > xb) ans+=2;
            else if (xa < xb && xf < xb && xf > xa) ans+=2;
        cout << ans << endl;
    }
    
    return 0;
}