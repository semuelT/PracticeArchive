#include <ios>
#include <iostream>
#include <vector>

using namespace std;

const long long conmod = 1000000007;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  long long b;
  string y;
  cin >> b >> y;
  if (b == 10) {
    cout << 1;
    return 0;
  }
  vector<long long> dp(y.size() + 1, 0);
  dp[0] = 1;
  for (int i = 0; i < y.size(); i++) {
    int digit = 0;
    for (int j = i; j < y.size(); j++) {
      digit = digit * 10 + (y[j] - '0');
      if (digit >= b) {
        break;
      }
      dp[j + 1] += dp[i];
      dp[j + 1] %= conmod;
      if (i == j && y[j] == '0') {
        break;
      }
    }
  }
  cout << dp[y.size()];
}
