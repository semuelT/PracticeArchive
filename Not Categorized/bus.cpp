#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int max = 0;
    int passangers = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int in = 0;
        int out = 0;
        cin >> out >> in;
        passangers += in-out;
        if (passangers > max) {
            max = passangers;
        }
    }
    cout << max;
}