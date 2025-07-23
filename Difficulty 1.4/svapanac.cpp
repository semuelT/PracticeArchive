#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int preseconds = ((a*60) +b)*60;
    preseconds -= 45*60;
    int minutes = preseconds / 60;
    int hours = minutes / 60;
    minutes = (minutes+60) % 60; // +60 is not needed on calculators for some reason.
    cout << hours << " " << minutes;
}