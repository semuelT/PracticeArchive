#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    vector<int> binary;
    vector<int> binaryreversed;
    int result = 0;
    cin >> num;
    while (num > 0)
    {
        binary.push_back(num % 2);
        num /= 2;
    }
    for (int i = binary.size() -1; i >= 0; i--) {
        binaryreversed.push_back(binary[i]);
    }
    for (int i = binaryreversed.size()-1; i>=0; i--) {
        if(binaryreversed[i] == 1) {
            result = result + pow(2,i);
        }
    }
    cout << result;
}