#include <bits/stdc++.h>
using namespace std;
int main() {
    string act;
    int ball = 1;
    cin >> act;
    for (char c: act) {
        if (c == 'A') {
            if (ball == 1) {
                ball = 2;
            } else if (ball == 2) {
                ball = 1;
            }
        } else if (c == 'B') {
            if (ball == 2) {
                ball = 3;
            } else if (ball == 3) {
                ball = 2;
            }
        } else if (c == 'C') {
            if (ball == 1) {
                ball = 3;
            } else if (ball == 3) {
                ball = 1;
            }
        }
    }
    cout << ball;
}