#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    int b;
    cin >> a >> b;
    if (a > b) {
        cout << "MAGA!";
    } else if (a < b) {
        cout << "FAKE NEWS!";
    } else {
        cout << "WORLD WAR 3!";
    }
}