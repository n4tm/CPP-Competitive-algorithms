#include <iostream>
#include <vector>

using namespace std;

int n, scan_aux, radius, dist, stop1 = 0, stop2, actualzero;
vector<int> ns;
vector<int> izeros;
vector<int> iminusones;

int main () {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> scan_aux;
        ns.push_back(scan_aux);
        if (ns[i] == 0) izeros.push_back(i);
        else if (ns[i] == -1) iminusones.push_back(i);
    }
    for (int i = 0; i < izeros.size(); i++) {
        if (i % 2 == 1) {
            radius = (izeros[i] - izeros[i-1])/2;
            stop2 = izeros[i] + radius;
            actualzero = izeros[i-1];
            for (int j = stop1; j < stop2-izeros.size(); j++) {
                if (dist > radius) {
                    actualzero = iminusones[i];
                } else if (dist <= radius){
                    dist = abs(iminusones[j] - actualzero);
                }
                ns[j] = dist;
            }
            stop1 = stop2;
        }
    }
    for (int i = 0; i < ns.size(); i++) {
        cout << ns[i] << ' ';
    }

    return 0;
}