#include <stdio.h>
#include <iostream>

using namespace std;
int n, k, ans;
string s;
int check(char x);

int main () {
    scanf("%d %d", &n, &k);
    cin >> s;
    int ansa = check('a');
    int ansb = check('b');
    ans = ansa;
    if (ansb > ansa) {
        ans = ansb;
    }
    printf("%d\n", ans);
    
    return 0;
}

int check(char x) {
    int ret = 0, l = 0, r = 0;  //return value, left iterator and right iterator
    int changed = 0;    //substrings that had to change to become a 'beautiful set'

    for (l; l < n; l++) {
        while (r < n && (changed < k || s[r] != x)) {
            if (s[r] == x) {
                changed++;
            }
            r++;
        }
        if (s[l] == x) {
            changed--;
        }
        if (ret < r-l) {
            ret = r-l;
        }
    }
    return ret;
}