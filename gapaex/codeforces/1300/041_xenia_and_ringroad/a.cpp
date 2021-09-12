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

/*Método 1: Linear com aritmética modular;
  Método 2: Linear com matemática*/

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, ai, antecessor;
    ll ans = 0;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> ai;
        if (i != 0) {
            if (ai < antecessor) ans += n-antecessor+ai;
            else ans += ai - antecessor;
        } else {
            ans += ai-1;
        }
        antecessor = ai;
    }
    cout << ans << endl;
    return 0;
}