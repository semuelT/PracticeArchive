#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int fizzbuzz = 0, fizz = 0, buzz = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % a == 0 && i % b == 0) {
            fizzbuzz++;
        } else if (i % a == 0) {
            fizz++;
        } else if (i % b == 0) {
            buzz++;
        }
    }
    cout << fizz << " " << buzz << " " << fizzbuzz;
}