#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<char> text;
    string input;
    cin >> input;
    for(auto c: input) {
        text.push_back(c);
    }
    int days = text.size();
    for (int i = 1;i <= text.size(); i++) {
        if (i % 3 == 1 && text[i-1] == 'P') {
            days--;
        } else if (i % 3 == 2 && text[i-1] == 'E') {
            days--;
        } else if (i % 3 == 0 && text[i-1] == 'R') {
            days--;
        }
    }
    cout << days;
}