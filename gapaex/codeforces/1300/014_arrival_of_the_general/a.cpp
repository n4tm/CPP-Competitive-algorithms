#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mp make_pair
#define pb push_back
#define oo 1e+9
#define debug(var) cerr << #var << " = " << var << endl;
#define N 11001001
 
vector<int> heights;
int n, aux, bigger = 0, smaller = oo, ismaller, ibigger, ans;
 
 
signed main () {
    ios_base::sync_with_stdio(0);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> aux;
        heights.push_back(aux);
        if (heights[i] > bigger) {
            bigger = heights[i];
            ibigger = i;
        }
        if (heights[i] <= smaller){
            smaller = heights[i];
            ismaller = i;
        }
    }
    ans = ibigger + heights.size() - ismaller-1;
    if (ismaller < ibigger) ans--;
    cout << ans << '\n';
    
 
    return 0;
}