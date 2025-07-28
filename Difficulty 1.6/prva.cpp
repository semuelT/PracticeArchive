#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int p, c;
    cin >> p >> c;
    vector<string> board(p);
    for (int i = 0; i < p; ++i) {
        cin >> board[i];
    }

    string terkecil = "~"; // ASCII 126

    // Horizontal scan
    for (int i = 0; i < p; ++i) {
        string word = "";
        for (int j = 0; j < c; ++j) {
            if (board[i][j] != '#')
                word += board[i][j];
            else {
                if (word.length() >= 2 && word < terkecil)
                    terkecil = word;
                word = "";
            }
        }
        if (word.length() >= 2 && word < terkecil)
            terkecil = word;
    }

    // Vertical scan
    for (int j = 0; j < c; ++j) {
        string word = "";
        for (int i = 0; i < p; ++i) {
            if (board[i][j] != '#')
                word += board[i][j];
            else {
                if (word.length() >= 2 && word < terkecil)
                    terkecil = word;
                word = "";
            }
        }
        if (word.length() >= 2 && word < terkecil)
            terkecil = word;
    }

    cout << terkecil << endl;
    return 0;
}
