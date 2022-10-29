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

int n, m, ai, ans;
queue<pair<int, int>> q;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> ai;
        q.push(make_pair(ai, i));
    }
    while (!q.empty()) {
        if (q.size() == 1) ans = q.front().second;
        if (q.front().first > m) {
            q.front().first -= m;
            q.push(q.front());
        }
        q.pop();
    }

    cout << ans << endl;
    
    return 0;
}