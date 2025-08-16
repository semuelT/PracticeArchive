#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    long long xb, yb;
    int n;
    bool safe = true;
    cin >> xb >> yb >> n;
    for (int i = 0; i < n; i++)
    {
        long long xi, yi;
        cin >> xi >> yi;
        long long xc = (xi-xb);
        long long yc = (yi-yb);
        long long distance = xc*xc + yc*yc;
        if (distance <= 64LL)
        {
            safe = false;
            break;
        }
    }
    if (safe)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}