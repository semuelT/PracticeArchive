#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << (45 * n) << " ml gin" << endl;
    cout << (30 * n) << " ml fresh lemon juice" << endl;
    cout << (10 * n) << " ml simple syrup" << endl;
    if (n > 1)
    {
        cout << (1 * n) << " slices of lemon" << endl;
    }
    else
    {
        cout << (1 * n) << " slice of lemon" << endl;
    }
}