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

int t, n, k;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++) {
        int cont = 0;
        cin >> n >> k;
        vec<int> u;
        vec<int> v(n); readintvec(v);
        for (int i = 0; i < n-1; i++) {
            if (v[i+1] < v[i]) {
                cont++;
            } else {
                for (int j = n-1; j > i+1; j--) {
                    if (v[j] < v[i+1]) {
                        cont++;
                        break;
                    }
                }
            }
        }
        if (cont == 0) cont = 1;
        // if (cont <= k) cout << "Yes" << endl;
        // else cout << "No" << endl;
        if (cont == k) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    
    
    return 0;
}