#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> dwarves(9);
    int total = 0;
    for (int i = 0; i < 9; ++i) {
        cin >> dwarves[i];
        total += dwarves[i];
    }

    for (int i = 0; i < 9; ++i) {
        for (int j = i + 1; j < 9; ++j) {
            if (total - dwarves[i] - dwarves[j] == 100) {
                for (int k = 0; k < 9; ++k) {
                    if (k != i && k != j) {
                        cout << dwarves[k] << endl;
                    }
                }
                return 0;
            }
        }
    }

    return 0;
}
