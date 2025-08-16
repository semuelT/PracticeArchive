#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  long long m;
  cin >> n >> m;
  vector<long long> pohon;
  long long maxh = 0;
  for (int i = 0; i < n; i++) {
    long long temp;
    cin >> temp;
    pohon.push_back(temp);
    maxh = max(maxh, temp);
  }
  sort(pohon.begin(), pohon.end());

  long long left = 0;
  long long right = maxh;
  long long ans = -1;

  // weirdly more complex
  while (left <= right) {
    long long mid = (left + right) / 2;
    auto it = lower_bound(pohon.begin(), pohon.end(), mid);
    long long ctotal = 0;
    for (auto iter = it; iter != pohon.end(); iter++) {
      ctotal += (*iter - mid);
    }
    if (ctotal >= m) {
      ans = mid;
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  cout << ans;
}
