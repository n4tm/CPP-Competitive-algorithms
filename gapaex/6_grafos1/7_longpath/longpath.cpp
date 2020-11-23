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
#define N 11001

int n, v1, v2, v1_max_dist = 1, max_dist = 0;
vi adj[N], dist;
int visited[N];

void dfs(int v) {
    visited[v] = 1;
    for (int i : adj[v]) {
        int a = adj[i][v];
        if (visited[a] == 0) {
            visited[a] = visited[v];
            dfs(a);
        }
    }
}

int main () {
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n-1; ++i) {
        cin >> v1 >> v2;
        adj[v1].pb(v2);
        adj[v2].pb(v1);
    }
    dist = vi(n+1, oo);
    dist[1] = 0;
    dfs(1);

    for(int i = 2; i <= n; ++i) {
        if(dist[i] > max_dist) {
            v1_max_dist = i;
            max_dist = dist[i];
        }
    }

    dist = vi(n + 1, oo);

    for(int i = 0; i <= n; ++i) visited[i] = 0;
    
    dist[v1_max_dist] = 0;

    dfs(v1_max_dist);

    max_dist = 0;
    for(int i = 1; i<= n; ++i) {
        if(dist[i] > max_dist) {
            v1_max_dist = i;
            max_dist = dist[i];
        }
    }
    cout << max_dist << '\n';
    return 0;
}