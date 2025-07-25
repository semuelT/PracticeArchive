#include <bits/stdc++.h>
using namespace std;
int main() {
    int endvalue = 0;
    string input;
    getline(cin,input);
    int values[11] = {4,3,2,7,6,5,0,4,3,2,1}; // 0 will be skipped
    for(int i = 0; i < 11; i++) {
        if (input[i] == '-') {
            continue;
        } else {
            endvalue += (input[i] - '0')*values[i]; // char to int conversion
        }
    }
    if (endvalue % 11 == 0) {
        cout << '1';
    } else {
        cout << '0';
    }
}