#include <bits/stdc++.h>
using namespace std;
#define N 1010
void reads(string& x) {char kk[N]; scanf("%s", kk); x = kk;}

int n, ans, v[N], id;
bool can;

int main() {
    scanf("%d", &n);
    while (n != 0) {
        stack<int> pilha;
        for (int i = 0; i < n; i++) {
            scanf("%d", v+i);
        }
        can = true;
        id = 1;
        for (int i = 0; i < n; i++) {
            while (!pilha.empty() && pilha.top() == id) {
                id++;
                pilha.pop();
            }
            if (v[i] == id) {
                id++;
            } else if (!pilha.empty() && pilha.top() < v[i]) {
                can = false;
                break;
            } else {
                pilha.push(v[i]);
            }
        }
        
        if (can) printf("yes\n");
        else printf("no\n");
        scanf("%d", &n);
    }

    return 0;
}