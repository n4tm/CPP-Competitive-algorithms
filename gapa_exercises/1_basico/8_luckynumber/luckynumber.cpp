#include <iostream>
#include <vector>

using namespace std;

void digits(int arg);
string compare(string sarg);
int digit;
vector<int> nums;

int main() {
    string resp = "YES";
    unsigned int n;
    cin >> n;
    digits(n);
    cout << compare(resp) << endl;

    return 0;
}

void digits(int arg) {
    arg = abs(arg);
    if (arg >= 10) {
        digits(arg / 10);
    }
    digit = arg % 10;
    nums.push_back(digit);
}

string compare(string sarg) {
    for (int i = 0; i < nums.size(); i++){
        if ((nums.size() != 4 && nums.size() != 7) || (nums[i] != 4 && nums[i] != 7)) {
            sarg = "NO";
            break;
        }
    }
    return sarg;
}