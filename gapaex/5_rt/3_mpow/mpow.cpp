#include <bits/stdc++.h>
using namespace std;
#define N 121121
typedef long long int lli;

lli t, scan_aux, mat[N][N], m[N], n[N], ans[N][N][N];
int main () {
    scanf("%lld", &t);
    for (lli k = 0; k < t; k++) {
        scanf("%lld %lld", m+k, n+k);
    }
    for (lli k = 0; k < t; k++) {
        for (lli i = 0; i < m[k]; i++) {
            for (lli j = 0; j < m[k]; j++) {
                scanf("%lld", &(mat[i][j]));
            }
        }
    }

    return 0;
}