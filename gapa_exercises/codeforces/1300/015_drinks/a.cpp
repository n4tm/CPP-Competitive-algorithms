#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define oo 1e+9
#define debug(var) cerr << #var << " = " << var << endl;
#define N 11001001
 
int n;
double amount, aux;
 
signed main () {
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        amount += aux/100; 
    }
    cout << setprecision(12) << amount*100/n << '\n';
 
    return 0;
}