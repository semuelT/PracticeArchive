#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> dilarang(n, vector<bool>(n, false));
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        dilarang[a][b] = true;
        dilarang[b][a] = true;
    }

    int count = 0;
    int tsubset = pow(2, n);

    for (int mask = 0; mask < tsubset; mask++)
    {
        bool valid = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (dilarang[i][j])
                {
                    if (mask & (1 << i) && mask & (1 << j))
                    {
                        valid = false;
                        break;
                    }
                }
            }
            if (!valid)
            {
                break;
            }
        }
        if (valid)
        {
            count++;
        }
    }
    cout << count;
}