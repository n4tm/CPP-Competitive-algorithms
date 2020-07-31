#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int n;
int nums[100099];
int compareInt(const void * a, const void * b);

int main () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int num = 0;
        cin >> nums[i];
        if (i == n-1) {
            qsort(nums, n, sizeof(int), compareInt);
            for (int j = 0; j < n; j++) {
                if (j == n-1) {
                    cout << nums[j] << '\n';
                }
                else {
                    cout << nums[j] <<  " ";
                }
            }
        }
    }
    return 0;
}

int compareInt (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}