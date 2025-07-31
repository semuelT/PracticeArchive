#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int nA, nB;
        vector<long> cA;
        vector<long> cB;
        cin >> nA;
        for (int i = 0; i <= nA; i++)
        {
            long temp;
            cin >> temp;
            cA.push_back(temp);
        }
        cin >> nB;
        for (int i = 0; i <= nB; i++)
        {
            long temp;
            cin >> temp;
            cB.push_back(temp);
        }

        long result[nA+nB+1] = {};

        for (int i = 0; i <= nA; i++)
        {
            for (int j = 0; j <= nB; j++)
            {
                result[i+j] += cA[i]*cB[j];
            }
        }
        cout << (nA+nB) << endl;
        for (auto num: result) {
            cout << num << " ";
        }
        cout << endl;
    }
}