#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main() {
    int num,w,h;
    double max;
    cin >> num >> w >> h;
    max = (w*w) + (h*h);
    max = sqrt(max);
    for (int i = 0; i < num; i++ ) {
        int temp;
        cin >> temp;
        if (temp <= max) {
            cout << "DA" << endl;
        } else {
            cout << "NE" << endl;
        }
    }
}