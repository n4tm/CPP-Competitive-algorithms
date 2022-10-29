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
#define N 1111

char grid[] = {'#', 'X', '.'}, c;
int n, m, k, amount;
int mat[N][N];
int di[] = {-1, 0, 1, 0};
int dj[] = {0, -1, 0, 1};
vi adj[N];

int can(int i, int j) {
    return i >= 0 && j >= 0 && i < n && j < m && mat[i][j] == 1;
}

void dfs(int i, int j) {
    if (amount == 0) return;
    mat[i][j] = 2;
    amount--;
    for (int l = 0; l < 4; l++) {
        if (can(i + di[l], j + dj[l])) {
            dfs(i + di[l], j + dj[l]);
        }
    }
}




int main () {
    ios_base::sync_with_stdio(0);
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> c;
            if (c == '.') {
                mat[i][j] = 1;
                amount++;
            }
        }
    }
    amount -= k;

    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            if (mat[i][j]) {
                dfs(i, j);
                i = n;
                j = m;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << grid[mat[i][j]];
        }
        cout << '\n';
    }

    return 0;
}