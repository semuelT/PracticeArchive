#include <bits/stdc++.h>
using namespace std;
int main()
{
    string abbre;
    getline(cin, abbre);
    for (char C: abbre) {
        if (isupper(C)) {
            cout << C;
        }
    }
}