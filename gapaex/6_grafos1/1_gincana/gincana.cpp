#include <bits/stdc++.h>
using namespace std;
#define N 7777
void dfs(int v);

int n, m, i, j, componentsnum = 0;
vector<int> adj[N];
int component[N];

int main () {
    scanf("%d %d", &n,&m);
    for (int k = 1; k <= n; k++) component[k] = -1;
    for (int k = 1; k <= m; k++) {
        scanf("%d %d", &i, &j);
        adj[i].push_back(j);
        adj[j].push_back(i);
    }
    for (int k = 1; k <= n; k++) {
        if (component[k] == -1) {
            componentsnum++;
            component[k] = componentsnum;
            dfs(k);
        }
    } 
    printf("%d\n", componentsnum);
    return 0;
}

void dfs(int v) {
    for (int l = 0; l < (int)adj[v].size(); l++) {
        int a = adj[v][l];
        if (component[a] == -1) {
            component[a] = component[v];
            dfs(a);
        }
    }
}