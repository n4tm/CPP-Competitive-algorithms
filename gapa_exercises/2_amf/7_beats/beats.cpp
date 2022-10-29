#include <iostream>


using namespace std;

unsigned int k;
char mat[4][4];
string ans = "NO";
void read();
bool isable();

int main () {
    read();
    if(isable()) {
        ans = "YES";
    }
    cout << ans << '\n';

   return 0;
}

void read() {
    cin >> k;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mat[i][j];
        }
    }
}

bool isable() {
    int nums[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            for (int l = 1; l <= 9; l++) {
                int imat = mat[i][j] - '0';
                if (imat == l) {
                    nums[l-1]++;
                    break;
                }
            }
        }
    }
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (k == i && nums[j] > (i*2)) {
                return false;
            }
        }
    }

    return true;
}