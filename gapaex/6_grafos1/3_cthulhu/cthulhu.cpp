#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int, int> ii;
#define SORT(x, d) if(d == 1)sort((x).begin(), (x).end()); else if(d == -1)sort((x).rbegin(), (x).rend())
#define oo 1e+9
#define sz(a) int((a).size())
#define pb push_back
#define fs first
#define sc second
#define N 1100100
void reads(string& x) {char kk[N]; scanf("%s", kk); x = kk;}
int n, m, sets = 0, scan_aux1, scan_aux2;
string ans = "FHTAGN!";
vi g[N];
int vis[N];

void dfs(int v) {
    for (int i = 0; i < (int)g[v].size(); i++) {
        int vert = g[v][i];
        if (vis[vert] == -1) {
            vis[vert] = vis[v];
            dfs(vert);
        }
    }
}

int main () {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        cin >> scan_aux1 >> scan_aux2;
        g[scan_aux1].push_back(scan_aux2);
        g[scan_aux2].push_back(scan_aux1);
    }
    for (int i = 1; i <= m; i++) vis[i] = -1;
    for (int i = 1; i <= n; i++) {
        if (vis[i] == -1) {
            sets++;
            if (sets > 1) {
                ans = "NO";
                break;
            }
            vis[i] = sets;
            dfs(i);
        }
    }
    if (n != m) ans = "NO";

    cout << ans << '\n';
    
    return 0;
}