#include <bits/stdc++.h>
using namespace std;
int main()
{
    int scatter = 0;
    for (int i = 0; i < 4; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < 4; j++)
        {
            char c = s[j];
            if (c != '.')
            {
                // kelamaan cma hitung ini 2 
                int px = (c - 65) / 4;
                int py = (c - 65) % 4;
                scatter += abs(i - px) + abs(j - py);
            }
        }
    }
    cout << scatter;
}