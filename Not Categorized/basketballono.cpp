#include <bits/stdc++.h>
using namespace std;
int main() // soal bikin bengong 1 jam 30 menit
{
    string record;
    int a = 0;
    int b = 0;
    cin >> record;
    for (int i = 0; i < record.size(); i += 2)
    {
        char player = record[i];
        int pts     = record[i+1] - '0';

        if (player== 'A') {
            a += pts;
        } else {
            b += pts;
        }
        bool deuce = (a >= 10 && b >= 10);

        if (player == 'A') {
            // pre-deuce: first to 11; in deuce: lead by 2
            if ((a >= 11 && !deuce) || (deuce && a - b >= 2)) {
                cout << 'A' << "\n";
                return 0;
            }
        } else {
            if ((b >= 11 && !deuce) || (deuce && b - a >= 2)) {
                cout << 'B' << "\n";
                return 0;
            }
        }
    }
}