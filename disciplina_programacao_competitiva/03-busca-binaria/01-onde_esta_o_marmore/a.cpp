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

int binary_search(vector<int> &v, int x) {
	int left = 0;
	int right = sz(v);
	int middle;
	while (left < right) {
		middle = left + (right-left)/2;
		if (v[middle] < x) left = middle+1;
		else right = middle;
	}
	return v[left] == x? left:-1;
}

int n, q, qi, cont;
void solve() {
	vector<int> v(n); for (int &x: v) scanf("%d", &x);
	sort(all(v));
	printf("CASE# %d:\n", ++cont);
	for (int i = 0; i < q; i++) {
		scanf("%d", &qi);
		int search_result = binary_search(v, qi);
		if (search_result == -1) printf("%d not found\n", qi);
		else printf("%d found at %d\n", qi, search_result+1);
	}
	scanf("%d %d", &n, &q);
};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	scanf("%d %d", &n, &q);
	while (n!=0||q!=0) solve();

	return 0;
}