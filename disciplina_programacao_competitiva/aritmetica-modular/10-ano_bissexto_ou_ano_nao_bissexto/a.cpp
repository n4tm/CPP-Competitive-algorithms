#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array
#define vec vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()
#define MOD (int) 1e9+7
int inv_mod(int a, int b){return a > 1 ? b-inv_mod(b%a, a)*b/a : 1;};

string s;
int aux;
const int tests[] = {100, 4, 400, 15, 55};

void solve() {
	while(cin >> s) {
		if (aux != 0) cout << '\n';
		aux++;
		bool ordinary = true;
		bool leap = false;
		bool has100 = false;
		for (int i=0; i < 5; i++) {
			int n = 0;
			int m = tests[i];
			for(int j=0; j<sz(s); j++) {
				int pow10 = ((10%m)*(n%m))%m;
				n = (pow10%m + (s[j] - '0')%m)%m;
			}
			if (!(n%m)) { 
				if (m == 100) has100 = true;
				if (((m == 4 && !has100) || m == 400) && !leap ) {
					cout << "This is leap year." << '\n';
					leap = true;
					ordinary = false;
				}
				if (m == 15){
					cout << "This is huluculu festival year." << '\n';
					ordinary = false;
				}
				if (leap && m == 55){
					cout << "This is bulukulu festival year." << '\n';
					ordinary = false;
				}
			}
		}
		if (ordinary) cout << "This is an ordinary year." << '\n';
	}


};

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);


	solve();

	return 0;
}