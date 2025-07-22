//
// Created by semuel on 08/07/25.
//
#include "bits/stdc++.h"
using namespace std;

int main(int argc, char *argv[])
{
    double v, a, t;
    cin >> v >> a >> t;
    double result = (v * t + (0.5) * (a * (t * t)));
    cout << result;
}
