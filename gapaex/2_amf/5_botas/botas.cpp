#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, m;
char l;
vector<char> ls;
vector<int> ms;
int ok = 0;
void scan();
void correct();

int main() {
    scan();
    correct();
    cout << ok << '\n';
    return 0;
}

void scan() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> m >> l;
        ms.push_back(m);
        ls.push_back(l);
    }
}
void correct() {
    int iaux;
    char caux;
    for (int i = 0; i < n; i++) {
        iaux = ms[i];
        caux = ls[i];
        int j = i + 1;
        while (j < n) {
            if ((iaux == ms[j]) && (caux != ls[j])) {
                ok++;
                ms[j] = 0;
                ls[j] = 0;
                break;
            }
            j++;
        }
    }
}