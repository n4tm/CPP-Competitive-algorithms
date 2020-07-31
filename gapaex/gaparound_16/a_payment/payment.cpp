#include <bits/stdc++.h>
using namespace std;

int n;

int pay(int an);

int main () {
    scanf("%d", &n);
    printf("%d\n", pay(n));

    return 0;
}

int pay(int an) {
    if (an <= 0) {
        return abs(an);
    }
    an-=1000;
    return pay(an);
}