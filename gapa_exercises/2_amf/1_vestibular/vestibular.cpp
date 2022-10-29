#include <iostream>
using namespace std;


int main() {
    char answers[80];
    char answerkey[80];
    int questions;
    int right = 0;
    int i = 0;
    int j = 0;

    cin >> questions;
    do {
        cin >> answers[i];
        i++;
    } while (i < questions);
    do {
        cin >> answerkey[j];
        j++;
    } while (j < questions);

    for (int l = 0; l < questions; l++) {
        if (answers[l] == answerkey[l]) {
            right++;
        }
    }

    cout << right << endl;

    return 0;
}