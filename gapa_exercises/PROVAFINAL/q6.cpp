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
#define N 1100100100

string s;
string ans = "No";
int turn = 0, aux = -1;

int main () {
    ios_base::sync_with_stdio(0);
    cin >> s;
    
    while(s.size() != aux) {
        aux = s.size();
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                s.erase(s.begin()+i-1, s.begin()+i+1);
                //cout << s << '\n';
                if (turn % 2 == 0) {
                    ans = "Yes";
                } else {
                    ans = "No";
                }
                turn++;
                break;
            }
        }
    }
    cout << ans << '\n';

    return 0;
}