//
// Created by semuel on 08/07/25.
//
#include "bits/stdc++.h"
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    int highest = 0;
    string nameh;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temph;
        string name;
        cin >> name >> temph;
        if (temph > highest) {
            highest = temph;
            nameh = name;
        }
    }
    cout << nameh;
}
