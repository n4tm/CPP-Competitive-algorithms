#include <iostream>
#include <vector>

using namespace std;

unsigned int n;
vector<int> x, y, z;
void scan();
bool isbalanced();

int main () {
    scan();
    if (isbalanced()) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
    
   return 0;
}

void scan() {
    cin >> n;
    int xi, yi, zi;
    for (int i = 0; i < n; i++) {
        cin >> xi >> yi >> zi;
        x.push_back(xi);
        y.push_back(yi);
        z.push_back(zi);
    }
}

bool isbalanced() {
    bool ans = true;
    int sx = 0, sy = 0, sz = 0;
    for (int i = 0; i < n; i++) {
        sx += x[i];
        sy += y[i];
        sz += z[i];
    }
    if (sx != 0 || sy != 0 || sz != 0) {
        ans = false;
    }
 
    return ans;
}