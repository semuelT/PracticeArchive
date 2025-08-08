#include <bits/stdc++.h>
#include "stringcantikosn.h"
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.length() < 3)
    {
        cout << -1;
    }
    vector<char> str;
    for (char c : s)
    {
        str.push_back(c);
    }
    
    for (char c : str)
    {
        cout << c;
    }
    cout << str.size();
}