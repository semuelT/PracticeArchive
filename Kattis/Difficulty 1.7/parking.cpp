#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,n, S[20];
    cin >> t;
    while(t--) {
        cin >>n;
        int L =100;
        int R =0;
        for (int i=0;i <n; i++) {
            cin >> S[i];
            if (S[i] < L) {
                L = S[i];
            }
            if (S[i] > R) {
                R = S[i];
            }
        }
        int minDist = 2000;
        for (int i=L; i <= R; i++) {
            int Sum = (i-L) + (R-L) + (R-i);
            if (Sum < minDist) {
                minDist = Sum;
            }
        }
        cout << minDist << endl;
    }
}