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
int t, k;
string s;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x = 1;
        cin >> k;
        while (k > 0) {
            s = to_string(x);
            if (x % 3 != 0 && s[len(s)-1] != '3') {
                k--;
            }
            x++;
        }
        cout << x-1 << endl;
    }
    
    
    return 0;
}