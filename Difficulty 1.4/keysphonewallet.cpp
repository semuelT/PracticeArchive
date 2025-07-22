#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    list<string> missing = {"keys","phone","wallet"};
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        if(temp == "wallet") {
            missing.remove("wallet");
        } else if (temp == "phone") {
            missing.remove("phone");
        } else if (temp == "keys") {
            missing.remove("keys");
        }
    }
    if(missing.empty()) {
        cout << "ready";
        return 0;
    }
    for (string item: missing) {
        cout << item << endl;
    }
}