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

int n, ans;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v(4); readintvec(v);
    sort(all(v));
    for (int i = 1; i < 4; i++) {
        if (v[i-1] == v[i]) ans++;
    }
    printf("%d\n", ans);

    
    return 0;
}