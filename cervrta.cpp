#include <bits/stdc++.h>
using namespace std;
int main() {
    int xa,xb,xc,ya,yb,yc,ansx,ansy;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    if (xa == xb) {
        ansx = xc;
    } else if (xa == xc) {
        ansx = xb;
    } else {
        ansx = xa;
    }
    if (ya == yb) {
        ansy = yc;
    } else if (ya == yc) {
        ansy = yb;
    } else {
        ansy = ya;
    }
    cout << ansx << " " << ansy;
}