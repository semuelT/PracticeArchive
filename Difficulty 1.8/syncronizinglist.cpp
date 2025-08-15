#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;
int binarysearch(int L, int R, int C, vector<int> Arr) {
  if (L <= R) {
    int M = (L + R) >> 1; // M=(L+R)/2;
    if (C == Arr[M])
      return M;
    else if (C < Arr[M])
      return binarysearch(L, M - 1, C, Arr);
    else
      return binarysearch(M + 1, R, C, Arr);
  } else
    return -1;
}

int main() {
  cin.tie(NULL);
  int input;

  while (cin >> input) {
    if (input == 0) {
      break;
    }
    int n = input;
    vector<int> bagianA;
    vector<int> bagianB;
    vector<int> bagianC;
    for (int i = 0; i < n; i++) {
      cin >> input;
      bagianA.push_back(input);
      bagianB.push_back(input);
    }

    for (int i = 0; i < n; i++) {
      cin >> input;
      bagianC.push_back(input);
    }

    sort(bagianB.begin(), bagianB.end());
    sort(bagianC.begin(), bagianC.end());
    for (auto e : bagianA) {
      int idx = binarysearch(0, n - 1, e, bagianB);
      cout << bagianC[idx] << endl;
    }
    cout << endl;
  }
}
