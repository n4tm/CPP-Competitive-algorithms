#include <bits/stdc++.h>
using namespace std;

int n;
int fib(int an);

int main () {
    scanf("%d", &n);
    printf("%d\n", fib(n));

    return 0;
}

int fib(int an) {
    if (an == 0 || an == 1) return 1;
    else return fib(an-1) + fib(an-2);
}