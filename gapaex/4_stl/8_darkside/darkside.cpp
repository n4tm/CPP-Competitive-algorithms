#include <bits/stdc++.h>
using namespace std;
#define N 500111
void reads(string& x) {char kk[N]; scanf("%s", kk); x = kk;}

long long int n, aux1, aux2, aux3, ans;
long long int jedis[N][2];
long long int lessj[N];

int main () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        scanf("%lld%lld%lld", &aux1, &aux2, &aux3);
        jedis[i][0] = aux1 + aux2 + aux3;
        jedis[i][1] = aux1 + aux2 + aux3 - max({aux1, aux2, aux3});
        lessj[i] = aux1 + aux2 + aux3 - max({aux1, aux2, aux3});
    }
    sort(lessj, lessj+n);
    for (int i = 0; i < n; i++) {
        ans = upper_bound(lessj, lessj+n, jedis[i][0]-2) - lessj;
        if (ans == n) ans--;
        else if(jedis[i][1] < lessj[ans])ans--;
        printf("%lld ", ans);
    }
    printf("\n");

    return 0;
}