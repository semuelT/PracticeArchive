#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long total = 0;
    vector<int> cards(n);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        cards[i] = temp;
    }
    sort(cards.begin(), cards.end());
    for (int i = 0; i < n; i++)
    {
        total += cards[i];
        while (i < n - 1 && cards[i] + 1 == cards[i + 1])
        {
            i++;
        }
    }
    cout << total;
}