#include <bits/stdc++.h>
using namespace std;
long double calculateArea(int xA, int xB, int xC, int yA, int yB, int yC)
{
    long double result = (abs(xA * (yB - yC) + xB * (yC - yA) + xC * (yA - yB))) / 2.0;
    return result;
}
int main()
{
    int xA, xB, xC, yA, yB, yC;
    cin >> xA >> yA >> xB >> yB >> xC >> yC;
    int n;
    cin >> n;
    long double lABC = calculateArea(xA, xB, xC, yA, yB, yC);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int pX, pY;
        cin >> pX >> pY;
        long double lPAC = calculateArea(xA, pX, xC, yA, pY, yC);
        long double lPBC = calculateArea(pX, xB, xC, pY, yB, yC);
        long double lPAB = calculateArea(xA, xB, pX, yA, yB, pY);
        if (lPAC + lPBC + lPAB == lABC)
        {
            count++;
        }
    }
    cout << fixed << setprecision(1) << lABC << endl
         << count;
}