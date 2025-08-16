#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        string input;
        string output = "";
        getline(cin, input);

        for (int j = 0; j < input.length(); j++)
        {
            char currentChar = input[j];

            if (currentChar == ' ')
            {
                if (!output.empty() && output.back() == '0')
                {
                    output += " "; 
                }
                output += "0";
            }
            else
            {
                string keypress;

                if (currentChar >= 'a' && currentChar <= 'c')
                {
                    keypress = string(currentChar - 'a' + 1, '2');
                }
                else if (currentChar >= 'd' && currentChar <= 'f')
                {
                    keypress = string(currentChar - 'd' + 1, '3');
                }
                else if (currentChar >= 'g' && currentChar <= 'i')
                {
                    keypress = string(currentChar - 'g' + 1, '4');
                }
                else if (currentChar >= 'j' && currentChar <= 'l')
                {
                    keypress = string(currentChar - 'j' + 1, '5');
                }
                else if (currentChar >= 'm' && currentChar <= 'o')
                {
                    keypress = string(currentChar - 'm' + 1, '6');
                }
                else if (currentChar >= 'p' && currentChar <= 's')
                {
                    keypress = string(currentChar - 'p' + 1, '7');
                }
                else if (currentChar >= 't' && currentChar <= 'v')
                {
                    keypress = string(currentChar - 't' + 1, '8');
                }
                else if (currentChar >= 'w' && currentChar <= 'z')
                {
                    keypress = string(currentChar - 'w' + 1, '9');
                }

                if (!output.empty() && output.back() == keypress[0])
                {
                    output += " ";
                }
                output += keypress;
            }
        }

        cout << "Case #" << i + 1 << ": " << output << endl;
    }
}