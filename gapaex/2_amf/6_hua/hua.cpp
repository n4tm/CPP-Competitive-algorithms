#include <iostream>

using namespace std;

string laugh, vowels, inversevowels;
char ans = 'N';
void isfun();

int main () {
    isfun();
    cout << ans << '\n';

   return 0;
}

void isfun() {
    cin >> laugh;
    for (int i = 0; i < laugh.size(); i++) {
        if (laugh[i] == 'a' || laugh[i] == 'e' || laugh[i] == 'i' || laugh[i] == 'o' || laugh[i] == 'u') {
            vowels.push_back(laugh[i]);
        }
    }
    for (int i = vowels.size()-1; i >= 0; i--) {
        inversevowels.push_back(vowels[i]);
    }
    if (vowels.compare(inversevowels) == 0) {
        ans = 'S';
    }
}