#include <iostream>
using namespace std;

int mat[50][50];
int n, q;
int li, lf, ci, cf;
int carrots = 0;

void crop(int mat[50][50], int ali, int aci, int alf, int acf);

int main() {
    cin >> n;
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }
    cin >> q;
    for (int i = 0; i < q; i++) {
        cin >> li >> ci >> lf >> cf;
        crop(mat, li, ci, lf, cf);
    }
 
    cout << carrots << '\n';
    return 0;
}

void crop(int mat[50][50], int ali, int aci, int alf, int acf) {
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < n; j++) {
            if (i >= (ali-1) && i <= (alf-1) && j >= (aci-1) && j <= (acf-1)) {
                carrots += mat[i][j];
                mat[i][j] = 0;
            }
            if (i >= (ali-1) && i <= (alf-1) && j >= (aci-1) && j <= (acf-1)) {
                carrots += mat[i][j];
                mat[i][j] = 0;
            }
        }
    }
}
