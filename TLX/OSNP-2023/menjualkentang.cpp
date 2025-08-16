#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  long long n, m;
  cin >> n >> m;

  vector<long long> A;
  vector<long long> B;

  long long sumA = 0;
  long long sumB = 0;
  for (long long i = 0; i < n; i++) {
    long long temp;
    cin >> temp;
    A.push_back(temp);
    sumA += temp;
  }
  for (long long i = 0; i < m; i++) {
    long long temp;
    cin >> temp;
    B.push_back(temp);
    sumB += temp;
  }
  sort(B.begin(), B.end());

  long long hasiltotal = 0;
  for (int i = m - 1; i >= 0; i--) {
    if (double(sumA + hasiltotal) / A.size() >
        double(sumB - hasiltotal) / B.size()) {
      break;
    }
    int digitvalue = B[i];
    int digitcount = count(B.begin(), B.end(), B[i]);
    hasiltotal += (B[i] * digitcount);
    for (int j = 0; j < digitcount; j++) {
      A.push_back(digitvalue);
      B.pop_back();
    }
    if (B.empty()) {
      cout << -1;
      return 0;
    }
  }

  cout << hasiltotal;
  return 0;
}
