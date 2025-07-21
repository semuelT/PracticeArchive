#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    double qaly = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double qa;
        double ya;
        cin >> qa >> ya;
        qaly = qaly + (ya * qa);
    }
    cout << qaly;
}