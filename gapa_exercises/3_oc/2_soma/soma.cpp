#include <iostream>
#include <vector>

using namespace std;

int n, scanaux, k, a, b;
vector<int> houses;

int main () {
    cin >> n;
    houses.reserve(n);
    for (int i = 0; i < n; i++) {
        cin >> scanaux;
        houses.push_back(scanaux);
        if (i == n-1) {
            cin >> k;
            auto begin = houses.begin();
            auto end = houses.end()-1;
            while (begin < end) {
                if (*begin + *end == k) {
                    a = *begin;
                    b = *end;
                    cout << a << ' ' << b << '\n';
                    return 0;
                } else if (*begin + *end < k) {
                    begin++;
                } else {
                    end--;
                }
            }
        }
    }

    return 0;
}