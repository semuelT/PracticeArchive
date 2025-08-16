#include <ios>
#include <iostream>
#include <utility>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, m;
  cin >> n >> m;
  if (n > m) {
    swap(n, m);
  }

  // input : 2 3
  int ans = 0;
  for (int i = 1; i <= m; i++) {
    ans += i; // ans: 1 3 6
  }
  int temp = m + 2;
  for (int i = 1; i < n; i++) {
    ans += temp;
    temp += 2; // ans: 11 | temp: 5
  }
  cout << ans;
}
