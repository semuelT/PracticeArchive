#include <bits/stdc++.h>
using namespace std;
int main() {
    int px = 0,py = 0;
    int gx = 0,gy = 0;
    int tmove = 0;
    cin >> px >> py >> gx >> gy;
    if (px != gx) {
        tmove = tmove + 1;
    }
    if (py != gy) {
        tmove = tmove + 1;
    }
    cout << tmove;
}