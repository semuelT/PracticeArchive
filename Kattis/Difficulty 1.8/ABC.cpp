#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int a, b, c;
    string order;
    cin >> a >> b >> c >> order;
    int numbers[3] = {a, b, c};
    vector<int> numVec(numbers, numbers + 3);
    sort(numVec.begin(), numVec.end());
    for (auto c : order)
    {
        if (c == 'A')
        {
            cout << numVec[0] << " ";
        }
        else if (c == 'B')
        {
            cout << numVec[1] << " ";
        }
        else if (c == 'C')
        {
            cout << numVec[2] << " ";
        }
    }
}