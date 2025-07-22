#include <bits/stdc++.h>
using namespace std;
int main() {
    int x,n,sum= 0;
    cin >> x >> n;
    for (int i = 0; i <n; i++) {
        int temp;
        cin >> temp;
        sum += (x-temp);
    }
    sum += x;
    cout << sum;
}