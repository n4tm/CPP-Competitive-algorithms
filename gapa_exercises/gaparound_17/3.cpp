#include <bits/stdc++.h>
using namespace std;
#define N 210121

int k, n, min_dist;
int h[N];

int main () {
    scanf("%d%d", &k,&n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &h[i]);
    }
    
    min_dist = h[0];
    printf("%d\n", abs(min_dist));

    return 0;
}