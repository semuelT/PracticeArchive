#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {
    while(b != 0) {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int main()
{
    int n;
    cin >> n;
    int radii1;
    for (int i = 0; i < n; i++)
    {
        int temp;
        if (i == 0) {
            cin >> radii1;
            continue;
        }
        cin >> temp;
        int g = gcd(radii1,temp);
        cout << (radii1/g) << "/" << (temp/g) << endl;
    }
}