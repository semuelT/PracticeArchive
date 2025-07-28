#include <bits/stdc++.h>
using namespace std;
int main()
{
    int in;
    while (cin >> in)
    {
        if (in == -1)
        {
            break;
        }
        int total = 0;
        int timeprevious = 0;
        for (int i = 0; i < in; i++)
        {
            int speed;
            int time;
            cin >> speed >> time;
            total += speed * (time - timeprevious);
            timeprevious = time;
        }
        cout << total << " miles" << endl;
    }
}