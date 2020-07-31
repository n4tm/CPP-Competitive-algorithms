#include <stdio.h>
#include <math.h>

int m, n, arr[110], aux;

int main () {
    
    scanf("%d %d", &n, &m);

    for (int i = 0; i < m; i++)
            arr[i] = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 3; j++) {
            scanf ("%d", &aux);
            arr[aux-1] += pow(110,2-j);
        }
    }
/*
    for (int i = 0; i < n; i++)
        printf ("%d ", arr[i]);
    printf("\n");
*/    
    for (int i = 0; i < n; i++) {
        int ma = -1;
        int mw = -1;
        for (int j = 0; j < n; j++) {
            if (arr[j] > ma) {
                ma = arr[j];
                mw = j;
            }
        }
        printf("%d ", mw+1);
        arr[mw] = -2;
    }

    return 0;
}
