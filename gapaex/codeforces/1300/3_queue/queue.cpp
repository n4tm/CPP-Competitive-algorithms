#include <iostream>
#include <vector>

using namespace std;

int n, t;
char swap_aux;
vector<int> gindexes;
string s;

int main () {
    cin >> n >> t;
    cin >> s;
    for (int i = 0; i < n; i++) {
       if (s[i] == 'G') {
           gindexes.push_back(i);
       }
    }
    while (t > 0) {
        for (int i = gindexes.size() - 1; i > -1; i--) {
            if (s[gindexes[i] - 1] == 'B') {
                swap_aux = s[gindexes[i] - 1];
                s[gindexes[i] - 1] = s[gindexes[i]];
                s[gindexes[i]] = swap_aux;
                gindexes[i]--;
            }
        }
        t--;
    }

    cout << s << '\n';

    return 0;
}