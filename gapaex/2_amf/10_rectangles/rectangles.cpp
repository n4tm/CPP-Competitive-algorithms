#include <iostream>
#include <math.h>

using namespace std;

int n, m, w , b;
unsigned long long int k0 = 0, k1 = 0, ans;
int mat[99][99];

int main () {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        w = 0, b = 0;
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) b++;
            else w++;
        }
        k0 += (unsigned long long int)pow(2, w)-1;
        k1 += (unsigned long long int)pow(2, b)-1;
    }
    for (int i = 0; i < m; i++) {
        w = 0, b = 0;
        for (int j = 0; j < n; j++) {
            if (mat[j][i] == 1) b++;
            else w++;
        }
        k0 += (unsigned long long int)pow(2, w)-1;
        k1 += (unsigned long long int)pow(2, b)-1;
    }

    ans = k0 + k1 - n*m;
    cout << ans << '\n';
    return 0;
}
