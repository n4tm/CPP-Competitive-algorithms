#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef vector<int> vi;
typedef pair<int, int> ii;
#define SORT(x, d) if(d == 1)sort((x).begin(), (x).end()); else if(d == -1)sort((x).rbegin(), (x).rend())
#define oo 1e+9
#define mp make_pair
#define sz(a) int((a).size())
#define pb push_back
#define fs first
#define sc second
#define N 110011

int main(){
    while(1) {
        int n, d;
        string s;
        cin >> n >> d;
        if (n == 0 && d == 0) break;
        cin >> s;
        /*int aux = n-1;
        for(int i = 0; i < aux || d > 0; i++) {
            if(int(s[i]) <= int(s[i+1])){
                s.erase(i,1);
                i--;
                d--;
                aux = -1;
            }
        }*/
        pair<int, int> p[N];
        pair<int, int> ps[N];
        for (int i = 0; i < n; i++) {
            p[i] = make_pair(i, int(s[i]));
            cout << p[i].fs << ' ' << p[i].sc;
        }
        sort(s.begin(), s.end());
        auto r = s.end()-1;
        while (d != 0) {
            ps[r - s.begin()] = make_pair(r - s.begin(), int(*r));
            s.erase(r);
            r--;
            d--;
        }
        for (int i = 0; i < )
        


        cout << s << '\n';
    }
}