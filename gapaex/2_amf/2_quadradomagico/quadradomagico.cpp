#include <iostream>
#include <vector>

using namespace std;

bool ismagic(vector<vector<unsigned int>> farg, unsigned int order);
int dp = 0, ds = 0, x = 0, y = 0;

int main() {
    unsigned int order;
    cin >> order;
    vector<vector<unsigned int>> f(order, vector<unsigned int>(order));
    for (int i = 0; i < order; i++) {
        for(int j = 0; j < order; j++) {
            cin >> f[i][j];
        }
    }
    if(ismagic(f, order)) {
        cout << ds << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}

bool ismagic(vector<vector<unsigned int>> farg, unsigned int order) {
    int x2;
    int y2;
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            x += farg[i][j];
            y += farg[j][i];
        }
        if (i == 0) {
            x2 = x;
            y2 = y;
        }
        dp += farg[i][i];
        ds += farg[i][order-1-i];
        if (x != x2 * (i + 1)  || y != y2 * (i + 1)) {
            return false;
        }
        if (x != y) {
            return false;
        }
        if (i == (order - 1)) {
            if (x2 != ds || x2 != dp || y2 != ds || y2 != dp) {
                return false;
            }
        }
    }
    if (dp != ds || order < 2 || order > 10) {
        return false;
    }
    return true;
}