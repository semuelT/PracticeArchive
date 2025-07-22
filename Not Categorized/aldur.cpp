#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    int lowest;
    cin >> lowest;
    for (int i = 1; i < t; i++) {
        int temp;
        cin >> temp;
        if (temp < lowest) {
            lowest = temp;
        }
    }
    cout << lowest;
}