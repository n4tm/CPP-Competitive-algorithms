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
#define readintvec(v) for(int &x: v) cin >> x
#define MOD (int)(1e9+7)
#define len(s) (int)(s.length())
int inv_mod(int a, int b){return(a>1?b-inv_mod(b%a,a)*b/a:1);}
unsigned int factorial(unsigned int n){int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

int t;
string s, ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a_pos = -1, cont = 1;
        ans = "YES";
        cin >> s;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] == 'a') {
                a_pos = j;
                break;
            }
        }
        if (a_pos < 0) ans = "NO";
        else {
            int l = a_pos-1, r = a_pos+1;
            while (l >= 0 || r < len(s)) {
                if (r < len(s) && s[r] == (char)(97+cont)) r++;
                else if (l >= 0 && s[l] == (char)(97+cont)) l--;
                else {
                    ans = "NO";
                    break;
                }
                cont++;
            }
        }

        cout << ans << endl;
    }    
    
    
    return 0;
}