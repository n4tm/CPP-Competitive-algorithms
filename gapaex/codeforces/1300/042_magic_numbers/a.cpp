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
unsigned int factorial(unsigned int n){unsigned int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

/*  */


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    const int M = 131071;
    while (getline(cin, s, '#')) {
        cin.ignore();
        ll int pow2 = 1, b10 = 0;
        for (ll int i = len(s)-1; i >= 0; --i) {
            if (s[i] != '0' && s[i] != '1') continue;
            b10 = (b10%M + ((s[i]-'0')*pow2)%M)%M;
            pow2 = ((pow2%M)*2)%M;
        }
        if (b10%M == 0) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
    
    
    return 0;
}