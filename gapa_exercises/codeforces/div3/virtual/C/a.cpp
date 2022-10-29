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
#define readvec(v) for(auto &x: v) cin >> x;
#define MOD (int)(1e9+7)
int inv_mod(int a, int b){return(a>1?b-inv_mod(b%a,a)*b/a:1);}
unsigned int factorial(unsigned int n){int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

int t, n;
string s;

bool cmp(string s1, string s2) {return len(s1) > len(s2);}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++) {
        int bigger = -1;
        int cont = 0;
        char cbigger;
        vec<string> strings;
        map<char, int> mp = {{'a', 0}, {'b', 0}, {'c', 0}, {'d', 0}, {'e', 0}};
        cin >> n;
        int ans = n;
        for (int j = 0; j < n; j++) {
            cin >> s;
            strings.pb(s);
            for (int k = 0; k < len(strings[j]); k++) {
                mp[s[k]]++;
            }
            for (auto x: mp) {
                if (x.second > bigger) {
                    bigger = x.second;
                    cbigger = x.first;
                }
            }
        }
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < len(strings[j]); k++) {
                if(strings[j][k] != cbigger) cont++;
            }
        }
        if (bigger > cont) {
            cout << "BIGGER IS BIGGER" << endl << endl;
        }
        else if (bigger == cont) ans = 0;
        else {
            sort(all(strings), cmp);
            int ig = 0;
            for (int j = 0; j < n; j++) {
                int contdif = 0;
                for (int k = 0; k < len(strings[j]); k++) {
                    if (strings[j][k] != cbigger) contdif++;
                }
                if (contdif > len(strings[j])/2) {
                    cont -= contdif;
                    ig++;
                }
                if (bigger > cont) {
                    ans = n - ig;
                    break;
                }
            }
        }
        cout << ans << endl;
    }

    
    return 0;
}