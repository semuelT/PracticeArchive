#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    getline(cin,s);
    for (int i = 0; i < n; i++)
    {
        getline(cin, s);
        if (s.find("Simon says") == 0)
        {
            s.erase(0, 10);
            cout << s << endl;
        }
        // vector<char> simonsubstr = {'S','i','m','o','n',' ','s','a','y','s'};
        // vector<char> substr;
        // for (int i = 0; i < 10; i++) {
        //     substr.push_back(s[i]);
        // }
        // if (simonsubstr == substr) {
        //     for (int i = 10; i < s.size(); i++) {
        //         cout << s[i];
        //     }
        //     cout << endl;
        // }
    }
}