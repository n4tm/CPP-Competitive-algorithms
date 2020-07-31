#include <bits/stdc++.h>
using namespace std;
#define N 9
void reads(string& x) {char kk[N]; scanf("%s", kk); x = kk;}

int n;
string s;
vector<pair<string, int>> v;

int main () {
    scanf("%d", &n);
    v.push_back(pair<string, int>("AC", 0));
    v.push_back(pair<string, int>("WA", 0));
    v.push_back(pair<string, int>("TLE", 0));
    v.push_back(pair<string, int>("RE", 0));
    for (int i = 0; i < n; i++) {
        reads(s);
        for (int j = 0; j < 4; j++) {
            if (s == v[j].first) v[j].second++;
        }
    }
    for (auto x : v) {
        printf("%s x %d\n", x.first.c_str(), x.second);
    }

    return 0;
}