#include <bits/stdc++.h>
using namespace std;
#define N 210121
void reads(string& x) {char kk[N]; scanf("%s", kk); x = kk;}

int n, cont;
string s, t;
void swap(char sp, char tp);

int main () {
    scanf("%d", &n);
    reads(s);
    reads(t);
    if ((count(s.begin(), s.end(), 'a') != count(t.begin(), t.end(), 'a')) || (count(s.begin(), s.end(), 'b')) != count(t.begin(), t.end(), 'b')) {
        printf("%d", -1);
    } else {
        
    }

    return 0;
}