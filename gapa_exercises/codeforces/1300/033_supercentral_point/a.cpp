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

int n, x, y, ans;
pair<int, int> p[1<<8];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        p[i] = make_pair(x, y);
    }

    for (int i = 0; i < n; i++) {
        bool a[] = {false, false, false, false};
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            if (p[i].first == p[j].first) {
                if (p[i].second > p[j].second) a[0] = true;
                if (p[i].second < p[j].second) a[1] = true;
            }
            if (p[i].second == p[j].second) {
                if (p[i].first > p[j].first) a[2] = true;
                if (p[i].first < p[j].first) a[3] = true;
            }
        }
        for (int k = 0; k < 4; k++) {
            if (!a[k]) break;
            if (k == 3) ans++;
        }
    }
    cout << ans << endl;

    
    return 0;
}