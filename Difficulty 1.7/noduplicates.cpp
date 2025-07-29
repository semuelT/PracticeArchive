#include <bits/stdc++.h>
using namespace std;
int main() {
    string line;
    getline(cin, line); 

    vector<string> words;
    stringstream ss(line);
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    bool duplicate = false;

    set<string> uwords;
    for (string  w: words) {
        if(uwords.count(w)) {
            duplicate = true;
            break;
        }
        uwords.insert(w);
    }

    if(duplicate) {
        cout << "no";
    }  else {
        cout << "yes";
    }
}