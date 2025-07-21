#include <bits/stdc++.h>
using namespace std;
int main() {
    int num;
    int lastdigit;
    cin >> num;
    lastdigit = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    cout << lastdigit << num;
}