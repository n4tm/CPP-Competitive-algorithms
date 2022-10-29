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
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    vec<int> v;
    int x, smaller, smalleri = 0;
    bool multi = false;
    for (int i = 0; i<n; i++) {
        cin >> x;
        v.pb(x);
        if (i == 0) smaller = x;
        else if (x < smaller) {
            smaller = x;
            smalleri = i;
        }
    }
    for (int i = 0; i<n; i++) {
        if (v[i] == smaller && i != smalleri) {
            multi = true;
            break;
        }
    }
    if (multi) cout << "Still Rozdil";
    else cout << smalleri+1;
    cout << endl;
    
    return 0;
}