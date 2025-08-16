#include <bits/stdc++.h>
using namespace std;
int main() {
    int m;
    cin >> m;
    vector<int> flightlist;
    int flightcount = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            int temp;
            cin >> temp;
            if (temp != -1) {
                flightcount++;
                flightlist.push_back(i+1); // origin
                flightlist.push_back(j+1); // destination
                flightlist.push_back(temp); // cost
            }
        }
    }
    if (flightcount == 0) {
        cout << flightcount << endl;
    }
    cout << flightcount << endl;
    for (int i = 0; i < flightlist.size(); i += 3) {
        cout << flightlist[i] << " " << flightlist[i+1] << " " << flightlist[i+2] << endl;
    }
}