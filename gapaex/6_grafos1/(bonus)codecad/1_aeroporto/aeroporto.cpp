#include <bits/stdc++.h>
using namespace std;
#define N 10011

int a, v, cont, aux_1, aux_2, bigger = INT_MIN;
map<int, int> repeat(N, 0);
vector<int> most;

bool comp(pair<int, int> &p1, pair<int,int> &p2) {
    return (p1.second < p2.second);
}

int main () {
    scanf("%d%d", &a, &v);
    while(a != 0 && v != 0) {
        for (int i = 0; i < v; i++) {
            scanf("%d%d", &aux_1, &aux_2);
            repeat[aux_1]++;
            repeat[aux_2]++;
        }
        sort(repeat.begin(), repeat.end(), comp);
        auto r = repeat.rbegin();
        auto l = repeat.rbegin();
        while (r->second == l->second) {
            most.push_back(l->second);
            l++;
        }
        printf("Teste %d\n", ++cont);
        for (auto x : most) {
            if (x == most[most.size()-1]) {
                printf("%d\n", x);
                break;
            }
            printf("%d ", x);
        }
        repeat.clear();
        most.clear();

        scanf("%d%d", &a, &v);
    }

    return 0;
}