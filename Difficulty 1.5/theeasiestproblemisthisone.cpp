#include <bits/stdc++.h>
using namespace std;
int sumDigitsR(int number)
{
    int sum = 0;
    while (number != 0)
    {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    while (cin >> N)
    {
        if (N == 0) {
            continue;
        }
        int Nsum;
        int result;
        bool calculationDone = false;
        Nsum = sumDigitsR(N);
        for (int i = 11; calculationDone != true; i++)
        {
            if (sumDigitsR(N * i) == Nsum)
            {
                calculationDone = true;
                result = i;
            }
        }
        cout << result << endl;
    }
    return 0;
}
