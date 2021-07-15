#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vec vector
#define pb push_back
#define ins insert
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define readintvec(v) for(int &x: v) scanf("%d", &x)
#define MOD (int)(1e9+7)
int inv_mod(int a, int b){return(a>1?b-inv_mod(b%a,a)*b/a:1);}
unsigned int factorial(unsigned int n){int ans=1,i;for(i=2;i<=n;i++)ans*=i;return ans;}

int n, aux1, aux2;
multimap<int, pair<int, int>> mp;
int ans;

void solve() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &aux1, &aux2);
		mp.insert(pair<int, pair<int, int>>(aux2, make_pair(i, aux1)));
	}

	while(sz(mp) > 0) {
		int min_ind = (*mp.begin()).second.first;
		int min_val = (*mp.begin()).first;
		for (auto it = mp.begin(); it != mp.end(); it) {
			if((*it).second.first >= min_ind) {
				ans += (*it).second.second * min_val;
				it = mp.erase(it);
			} else ++it;
		}
	}
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	solve();
	printf("%d\n", ans);

	return 0;
}