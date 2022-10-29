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
#define N 11001001

int n, iaux, total;
char caux;
char c[3] = {'C', 'R', 'S'};
map<char, int> test;
string ans[] = {"coelhos: ", "ratos: ", "sapos: "};

int main () {
    cin >> n;
    test['C'] = 0; test['R'] = 0; test['S'] = 0;
    for (int i = 0; i < n; i++) {
        cin >> iaux >> caux;
        test[caux] += iaux;
        total += iaux;
    }
    cout << "Total: " << total << " cobaias\n";
    for(int i = 0; i < 3; i++) {
        cout << "Total de " << ans[i] << test[c[i]] << "\n";

    }
    for(int i = 0; i < 3; i++) {
        printf("Percentual de %s%.2f %%\n", ans[i].c_str(), float((test[c[i]]*100))/total);
    }
    

    return 0;
}