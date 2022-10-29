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
#define readintvec(v) for(int &x: v) scanf("%d", &x)
#define MOD (int)(1e9+7)
int inv_mod(int a, int b){return(a>1?b-inv_mod(b%a,a)*b/a:1);}
unsigned int factorial(unsigned int n){int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

string s1, s2, s3;
int a[7<<2];

void solve() {
    cin >> s1 >> s2 >> s3;
    for (int i = 0; i < s1.length(); i++) {
        a[s1[i]-65]++;
    }
    for (int i = 0; i < s2.length(); i++) {
        a[s2[i]-65]++;
    }
    for (int i = 0; i < s3.length(); i++) {
        a[s3[i]-65]--;
    }
    for (int i = 0; i < (7<<2); i++) {
       if (a[i] != 0) {
           cout << "NO" << endl;
           return;
       }
    }
    cout << "YES" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    solve();
    
    return 0;
}