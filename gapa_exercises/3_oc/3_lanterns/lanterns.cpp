#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int n, l, scan_aux;
double d = 0.0;
vector<int> lant;

int main () {
    cin >> n >> l;
    lant.reserve(n);
    for (int i = 0; i < n; i++) {
        cin >> scan_aux;
        lant.push_back(scan_aux);
    }
    sort(lant.begin(), lant.end());
    for (int i = 1; i < n; i++) {
        if ((double)(lant[i] - lant[i-1])/2 > d) {
            d = (double)(lant[i] - lant[i-1])/2;
        }
    }
    if ((double)(l - lant[n-1]) > d || (double)lant[0] > d) {
        if (l - lant[n-1] > lant[0]) {
            d = (double)(l - lant[n-1]);
        } else {
            d = (double)lant[0];
        }
    }

    printf("%.10f\n", d);

    return 0;
}