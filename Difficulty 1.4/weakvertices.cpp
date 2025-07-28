#include <bits/stdc++.h>
using namespace std;
int main() // not done; outputs garbled stuff
{
    int n;
    cin >> n;
    int M[n][n];
    while (true)
    {
        int input;
        cin >> input;
        if (input == -1)
        {
            break;
        }

        for (int x = 0; x < n; x++)
        {
            for (int y = 0; y < n; y++)
            {
                M[x][y] = input;
            }
        }
    }
    vector<int> weakv;
    for (int x = 0; x < n; x++)
    {
        vector<int> tocheck;
        bool weak = false;
        for (int y = 0; y < n; y++)
        {
            if (M[x][y] == 1)
            {
                cout << x << y;
                tocheck.push_back(y);
            }
        }
        if (tocheck.size() < 2)
        {
            weak = true;
        }
        else
        {
            for (int xidx = 0; xidx < tocheck.size(); xidx++)
            {
                int neix = tocheck[xidx];
                for (int yidx = xidx + 1; yidx < tocheck.size(); xidx++)
                {
                    int neiy = tocheck[yidx];
                    if (M[neix][neiy] == 1)
                    {
                        cout << neix << " " << neiy;
                        weak = false;
                        break;
                    }
                }
                if (!weak)
                {
                    break;
                }
            }
        }
        if (weak)
        {
            weakv.push_back(x);
        }
        // for (int i = 0; i < weakv.size(); i++) {
        //     cout << weakv[i];
        // }
        cout << endl;
    }
}