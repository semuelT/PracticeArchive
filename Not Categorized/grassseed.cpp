#include <bits/stdc++.h>
using namespace std;
int main() {
    long double c;
    int l;
    long double sum = 0;
    cin >> c >> l;
    for (int i = 0; i < l; i++) {
        long double w,l,total;
        cin >> w >> l;
        total = w*l;
        sum += (total*c);
    }
    cout << fixed << setprecision(8) << sum;
}