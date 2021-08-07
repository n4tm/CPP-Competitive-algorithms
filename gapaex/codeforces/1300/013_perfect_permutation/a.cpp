#include <iostream>
 
using namespace std;
 
int n;
 
int main() {
	cin >> n;
	if (n % 2) cout << -1 << '\n';
	else {
		for (int i = 0; i < n; i++) {
			if (i%2) cout << i;
			else cout << i+2;  
			if (i != n-1) cout << ' ';
			else cout << '\n';
		}
	}
	return 0;
}