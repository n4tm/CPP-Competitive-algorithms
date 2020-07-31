#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main(){
    vector<int> nums;
    int num;
    string line;
    getline(cin, line);
    istringstream iss(line);
    while (iss >> num){
        nums.push_back(num);
    }

    int bigger = *max_element(nums.begin(), nums.end());
    cout << bigger << "\n";

    return 0;
}