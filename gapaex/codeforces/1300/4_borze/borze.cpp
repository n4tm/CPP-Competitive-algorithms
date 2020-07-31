#include <iostream>

using namespace std;

string code;
string result;

int main () {
    cin >> code;
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == '-') {
            if (code[i+1] == '-') {
                result.push_back('2');
            } else {
                result.push_back('1');
            }
            i++;
        } else {
            result.push_back('0');
        }
    }
    cout << result << '\n';
    return 0;
}