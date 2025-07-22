#include <bits/stdc++.h>
using namespace std;
int main() {
    int insec;
    cin >> insec;
    int seconds = insec % 60;
    int minutes = insec / 60;
    int hours = minutes / 60;
    minutes = minutes % 60;
    cout << hours << " : " << minutes << " : " << seconds;
}