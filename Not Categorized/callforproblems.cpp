#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,sum = 0;
    cin >> n;
    for(int i = 0; i<n; i++) {
        int temp;
        cin >> temp;
        if ((temp%2) != 0 && temp != 0) {
            sum += 1;
        }
    }
    cout << sum;
}