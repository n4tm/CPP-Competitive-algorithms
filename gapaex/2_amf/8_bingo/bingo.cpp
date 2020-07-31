#include <iostream>
#include <algorithm>

using namespace std;

int n = 9999, b = 9999, taken;
char resp;
int stayed[99];
/*
void merge(int arr[], int l, int m, int r);
void merge_sort(int arr[], int l, int r); */

bool is_playable(int big, int small);

int main () {
    while (n >= 1 || b >= 2) {
        int bigger = -1, smallest = 999999;
        cin >> n >> b;
        if (n == 0 && b == 0) {
            break;
        }
        taken = n+1 - b;
        for (int i = 0; i < b; i++) {
            cin >> stayed[i];
            if (stayed[i] > bigger) {
                bigger = stayed[i];
            }
            if (stayed[i] < smallest) {
                smallest = stayed[i];
            }
        }
        if (is_playable(bigger, smallest)) {
            resp = 'Y';
        } else {
            resp = 'N';
        }
        cout << resp << '\n';
    }
    return 0;
}

bool is_playable(int big, int small) {
    bool ans = true;
    //merge_sort(stayed, 0, n-1);
    if (((n % 2 == 1) && (b % 2 == 1) && (n > b)) || ((n % 2 == 0) && (b % 2 == 1) && (n > b))) {
        ans = false;
    }
    if (find(stayed, stayed+n, b) == stayed)
    if (b == 2 && n == 2) {
        ans = false;
    }
    if (big != n) {
        ans = false;
    }
    if (b <= taken) {
        ans = false;
    }
    if (small != 0) {
        ans = false;
    }
    

    return ans;
}

/*
void merge(int arr[], int l, int m, int r) {
    int i, j, k, n1 = m - l + 1, n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++) {
        L[i] = arr[l+1];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[m+1+j];
    }
    i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int l, int r) {
    if (l < r) { 
        int m = l + (r - l) / 2; 
        merge_sort(arr, l, m); 
        merge_sort(arr, m + 1, r); 
        merge(arr, l, m, r); 
    } 
}
*/