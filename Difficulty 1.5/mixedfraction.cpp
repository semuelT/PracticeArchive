#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    while(cin >> a >> b) {
        if (a == 0 && b == 0) {
            continue;
        }
        int pembilang = (a%b);
        int penyebut = b;
        int bilb = (a/b);
        cout << bilb << " " << pembilang << " / " << penyebut << endl;
    }
    return 0;
}