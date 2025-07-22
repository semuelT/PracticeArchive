#include <bits/stdc++.h>
using namespace std;
int main() // agak spageti; slow
{
    int n;
    cin >> n;
    int tolearn[n];
    int learned[n - 1];
    int havenotbeenlearned;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        tolearn[i] = temp;
    }
    for (int i = 0; i < (n - 1); i++)
    {
        int temp;
        cin >> temp;
        learned[i] = temp;
    }
    for (int i = 0; i < (sizeof(tolearn)/sizeof(tolearn[0])); i++) {
        bool matched = false;
        for (int learnedknot: learned) {
            if (learnedknot == tolearn[i]) {
                matched = true;
            }
        }
        if (!matched) {
            havenotbeenlearned = tolearn[i];
        }
    }
    cout << havenotbeenlearned;
}