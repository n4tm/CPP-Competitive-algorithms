#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
#define SORT(x, d) if(d == 1)sort((x).begin(), (x).end()); else if(d == -1)sort((x).rbegin(), (x).rend());
#define oo 1e+9
#define sz(a) int((a).size())
#define pb push_back
#define fs first
#define sc second
#define N 1111
void reads(string& x) {char kk[N]; scanf("%s", kk); x = kk;}

int n, m;
int mat[N][N], vis[N][N];
ii ori, dest;

int can(int i, int j) {
    return (i > 0 && i <=n && j > 0 && j<=m && (mat[i][j] == 1 || mat[i][j] == 3) && !vis[i][j]);
}

int dfs(ii u) {
    vis[u.first][u.second] = 1;
    if (u == dest) return 1;
    int r = oo;
    ii v;
    if(can(u.fs - 1, u.sc)) {
        v = ii(u.fs -1, u.sc);
        r = min(r, dfs(v) + 1);
    }
    if(can(u.fs, u.sc + 1)) {
        v = ii(u.fs, u.sc + 1);
        r = min(r, dfs(v) + 1);
    }
    if(can(u.fs + 1, u.sc)) {
        r = min(r, dfs({u.fs + 1, u.sc}) + 1);
    }
    if(can(u.fs, u.sc - 1)) {
        r = min(r, dfs({u.fs, u.sc - 1}) + 1);
    }
    return r;
}

int main () {
    ios_base::sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j<= m; ++j) {
            cin >> mat[i][j];
            if (mat[i][j] == 2) ori.fs = i, ori.sc = j;
            else if (mat[i][j] == 3) dest.fs = i, dest.sc = j;
        }
    }
    cout << dfs(ori) << '\n';

    return 0;
}