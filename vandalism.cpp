#include <bits/stdc++.h>
using namespace std;
int main()
{
    string vandalized;
    cin >> vandalized;
    bool Uexist = false;
    bool Aexist = false;
    bool Pexist = false;
    bool Cexist = false;
    for (char c : vandalized)
    {
        if (c == 'U')
        {
            Uexist = true;
        }
        else if (c == 'A')
        {
            Aexist = true;
        }
        else if (c == 'P')
        {
            Pexist = true;
        }
        else if (c == 'C')
        {
            Cexist = true;
        }
    }
    string missing_letters = "";

    if (!Uexist)
    {
        missing_letters += 'U';
    }
    if (!Aexist)
    {
        missing_letters += 'A';
    }
    if (!Pexist)
    {
        missing_letters += 'P';
    }
    if (!Cexist)
    {
        missing_letters += 'C';
    }

    cout << missing_letters;
}