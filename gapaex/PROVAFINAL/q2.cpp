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
#define N 110011

int m1[N], m2[N];
int t, n, aux_1, aux_2;
pair<int, int> ms;

int main () {
    ios_base::sync_with_stdio(0);
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d%d", &aux_1, &aux_2);
            ms = make_pair(aux_1, aux_2);
        }
    
    }

    return 0;
}