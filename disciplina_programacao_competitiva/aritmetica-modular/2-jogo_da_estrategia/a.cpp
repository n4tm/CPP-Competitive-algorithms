#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vec vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define MOD 1e9+7
int inv_mod(int a, int b){return a > 1 ? b-inv_mod(b%a, a)*b/a : 1;};

int j, r, aux, score[510], bigger_ind, bigger = INT_MIN;

void solve() {
	cin >> j >> r;
	for (int i=0; i<j*r; i++) {
		cin >> aux;
		score[i%j] += aux;
	}
	for (int i=0; i<j; i++) {
		if(score[i] >= bigger){
			bigger = score[i];
			bigger_ind = i;
		} 
	}
	cout << ++bigger_ind << '\n';


};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}