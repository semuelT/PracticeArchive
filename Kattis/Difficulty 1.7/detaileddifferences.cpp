#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        string a,b;
        string output = "";
        cin >> a >>b;
        for(int i = 0; i < a.length(); i++) {
            if (a[i] != b[i] ) {
                output += "*";
            } else {
                output += ".";
            }
        }
        cout << a << endl << b << endl << output << endl << endl;
    }
}