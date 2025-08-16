#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  while (true) {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) {
      break;
    }

    vector<int> diameterkepala;
    vector<int> tinggikesatria;

    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      diameterkepala.push_back(temp);
    }
    for (int i = 0; i < m; i++) {
      int temp;
      cin >> temp;
      tinggikesatria.push_back(temp);
    }
    sort(diameterkepala.begin(), diameterkepala.end());
    sort(tinggikesatria.begin(), tinggikesatria.end());

    int idxA = 0;
    int idxB = 0;
    int totalbayar = 0;
    while (idxA < n && idxB < m) {
      if (diameterkepala[idxA] <= tinggikesatria[idxB]) {
        totalbayar += tinggikesatria[idxB];
        idxA++;
        idxB++;
      } else {
        idxB++;
      }
    }
    if (idxA == n) {
      cout << totalbayar << endl;
    } else {
      cout << "Loowater is doomed!" << endl;
    }
  }
}
