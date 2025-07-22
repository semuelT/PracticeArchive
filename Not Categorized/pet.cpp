#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    for (int i = 1; i <= 20; i++)
    {
        int temp;
        cin >> temp;
        if (i >= 1 && i <= 4)
        {
            a += temp;
        }
        else if (i >= 5 && i <= 8)
        {
            b += temp;
        }
        else if (i >= 9 && i <= 12)
        {
            c += temp;
        }
        else if (i >= 13 && i <= 16)
        {
            d += temp;
        }
        else
        {
            e += temp;
        }
    }
    if (a > b && a > c && a > d && a > e)
    {
        cout << "1 " << a;
    }
    else if (b > a && b > c && b > d && b > e)
    {
        cout << "2 " << b;
    }
    else if (c > a && c > b && c > d && c > e)
    {
        cout << "3 " << c;
    }
    else if (d > a && d > b && d > c && d > e)
    {
        cout << "4 " << d;
    }
    else
    {
        cout << "5 " << e;
    }
}