#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    int k = 0;
    while (cin >> input)
    {
        if (input == 0)
        {
            break;
        }
        k++;
        int n = input;
        vector<string> names;
        for (int i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            names.push_back(temp);
        }
        vector<string> output;

        for (int i = 0; i < n; i += 2)
        {
            output.push_back(names[i]);
        }
        if(n % 2 ==0 ) {
            n = n-1;
        } else {
            n = n -2;
        }
        for (int i = n; i >= 0; i -= 2)
        {
            output.push_back(names[i]);
        }

        cout << "SET " << k << endl;
        for (string s : output)
        {
            cout << s << endl;
        }
    }
}