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

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> k;
        int aux = 1, x = 1, cont = 1;
        while (1) {
            if (x <= k && x >= cont+aux-2) {
                cout << k-x+1 << endl;
                break;
            }
            x += aux;
            aux += 2;
            cont++;
        }
    }
    
    
    return 0;
}