#include <iostream>
using namespace std;

int main() {
    int animals, legs;
    int turtlelegs = 4;
    int cranelegs = 2;
    int turtle = 0;
    int crane = 0;
    string resp = "Yes";
    cin >> animals >> legs;
    for (int i = 0; i < animals; i++) {
        turtlelegs += 4;
        turtle ++;
        if (animals == turtle) {
            if (legs == turtle || legs == crane) {
                break;
            } else {
                resp = "No";
            }
        
        
            
        }
        cranelegs += 2;
        crane ++;
    }
    cout << resp << '\n';

    return 0;
}