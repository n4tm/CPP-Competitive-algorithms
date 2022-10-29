#include <iostream>
#include <vector>

using namespace std;

string language(string words);

int main() {
    int t;
    cin >> t;
    string words;
    vector<string> lang;
    for (int i = 0; i < t; i++) {
        cin >> words;
        lang.push_back(language(words));
    }
    for (int i = 0; i < t; i++) {
        cout << lang[i] << endl;
    }
    return 0;
}

string language(string words) {
    if (words.substr(words.size() - 2) == "po") {
        return "FILIPINO";
    } else if (words.substr(words.size() - 4) == "desu" || words.substr(words.size() - 4) == "masu") {
        return "JAPANESE";
    }
    return "KOREAN";
}