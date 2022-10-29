#include <iostream>

using namespace std;

unsigned int n;
unsigned int vertices;
void scan();
int dangerous();

int main () {
    scan();
    cout << dangerous() << '\n';

   return 0;
}

void scan() {
    int x_aux, y_aux;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cin >> x_aux >> y_aux;
        vertices++;
    }
}

int dangerous() {
    return (vertices - 4)/2;
}