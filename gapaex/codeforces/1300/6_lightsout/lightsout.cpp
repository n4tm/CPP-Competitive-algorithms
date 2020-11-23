#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define oo 1e+9
#define debug(var) cerr << #var << " = " << var << endl;
#define N 11001001

int grid[3][3];
int gridinp[3][3];
vector<pair<int, int>> p;

void switchlights(int ai, int aj) {
    grid[ai][aj] = 0;
    if (ai >= 1 && grid[ai-1][aj] != 2) {
        if(!grid[ai-1][aj]) grid[ai-1][aj] = 1;
        else grid[ai-1][aj] = 0;
    }
    if (aj >= 1 && grid[ai][aj-1] != 2) {
        if(!grid[ai][aj-1]) grid[ai][aj-1] = 1;
        else grid[ai][aj-1] = 0;
    }
    if (ai <= 2 && grid[ai+1][aj] != 2) {
        if(!grid[ai+1][aj]) grid[ai+1][aj] = 1;
        else grid[ai+1][aj] = 0;
    }
    if (aj <= 2 && grid[ai][aj+1] != 2) {
        if(!grid[ai][aj+1]) grid[ai][aj+1] = 1;
        else grid[ai][aj+1] = 0;
    }
}

signed main () {
    ios_base::sync_with_stdio(0);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            grid[i][j] = 1;
            cin >> gridinp[i][j];
            if (gridinp[i][j] % 2) {
                grid[i][j] = 2;
                p.pb(mp(i, j));
            }
        }
    }
    cout << '\n';
    for (int i = 0; i < p.size(); i++) {
        switchlights(p[i].first, p[i].second);
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}