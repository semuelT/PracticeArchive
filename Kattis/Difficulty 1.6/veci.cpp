#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string nstr;
    nstr = s;
    next_permutation(nstr.begin(), nstr.end());

    if (stoi(nstr) <= stoi(s)) {
        cout << 0;
    } else {
        cout << nstr;
    }
}