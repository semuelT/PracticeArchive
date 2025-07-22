#include <bits/stdc++.h>
using namespace std;
int main() {
    string input;
    cin >> input;
    for(int i = 0; i < input.size(); i++) {
        if (input[i] == 'k' && i < (input.size()-2)) {
            if (input[i+1] == 't' && input[i+2] == 'h') {
                cout << "yes";
                return 0;
            }
        }
    }
    cout << "no";
}