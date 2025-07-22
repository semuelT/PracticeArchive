//
// Created by semuel on 08/07/25.
//
#include "bits/stdc++.h"
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    int sum = 0;
    cin >> n;
    for (int i =0; i < n; i++) {
        int temp;
        cin >> temp;
        sum = sum + temp;
    }
    cout << sum;
}