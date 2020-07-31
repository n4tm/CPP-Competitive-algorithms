#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli n;
char ans = 'S';
bool prime();
int main () {
    scanf("%lld", &n);
    if (prime()) ans = 'N';
    printf("%c\n", ans);
    return 0;
}

bool prime() {
    lli k = ceil(sqrt(n));
    for (lli i = 2; i < k; i++) {
        if (n % i == 0) return false;
    }
    return true;
}