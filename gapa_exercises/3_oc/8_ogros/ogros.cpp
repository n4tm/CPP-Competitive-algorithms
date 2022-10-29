#include <iostream>
#include <vector>


using namespace std;

int n, m, from, to, middle, scan_aux, check;
vector<int> a;
vector<int> f;
vector<int> o;
vector<int> result;


int main () {
    cin >> n >> m;
    for (int i = 0; i < n-1; i++) {
        cin >> scan_aux;
        a.push_back(scan_aux);
    }
    for (int i = 0; i < n; i++) {
        cin >> scan_aux;
        f.push_back(scan_aux);
    }
    for (int i = 0; i < m; i++) {
        cin >> scan_aux;
        o.push_back(scan_aux);
        if (o[i] < a[0]) {
            result.push_back(f[0]);
        } else if (o[i] >= a[n-2]) {
            result.push_back(f[n-1]);
        } else if (o[i] >= a[0] && o[i] < a[n-2]) {
            from = 0;
            to = n-2;
            while (from < to) {
                if (check == to) {
                    result.push_back(f[middle]);
                    break;
                }
                middle = (from + to)/2 + (from + to) % 2;
                if (o[i] > a[middle]) {
                    from = middle;
                } else if (o[i] < a[middle]) {
                    check = to;
                    to = middle;
                } else {
                    result.push_back(f[middle+1]);
                    break;
                }
            }
        }
    }
    for (int i = 0; i < result.size(); i++) {
        if (i == m-1) {
            cout << result[i] << '\n';
        } else {
            cout << result[i] << ' ';
        }
    }
    return 0;
}