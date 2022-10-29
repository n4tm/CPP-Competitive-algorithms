#include <stdio.h>
#include <vector>


using namespace std;

int n, aux, ans, id;
vector<int> l;

int main () {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &aux);
        l.push_back(aux);
    }
    id = n-1;
    for (int i = n-1; i >= 0; i--) {
        if (i == id)ans++;
        if (i - l[i] - 1 < id) id = i - l[i] - 1;
        if (i == id) id--;
    }

    printf("%d\n", ans);

    return 0;

}