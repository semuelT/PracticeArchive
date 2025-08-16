#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int binarysearch(int L, int R, int C, const vector<int> &Arr) {
  if (L < R) {
    int M = (L + R) >> 1; // M=(L+R)/2;
    if (C == Arr[M])
      return M;
    else if (C < Arr[M])
      return binarysearch(L, M, C, Arr);
    else
      return binarysearch(M + 1, R, C, Arr);
  } else
    return L;
}

int main() {
  int n, m;
  cin >> n >> m;
  long long wasted = 0;
  vector<int> kalengcat;
  int catbutuh[m];
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    kalengcat.push_back(temp);
  }
  for (int i = 0; i < m; i++) {
    int temp;
    cin >> temp;
    catbutuh[i] = temp;
  }

  sort(kalengcat.begin(), kalengcat.end());
  for (int e : catbutuh) {
    // int idx = binarysearch(0, n - 1, e, kalengcat);
    auto idx =
        lower_bound(kalengcat.begin(), kalengcat.end(), e) - kalengcat.end();
    wasted += (idx);
  }
  cout << wasted;
}
