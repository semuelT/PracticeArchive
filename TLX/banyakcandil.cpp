#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string input;
  getline(cin, input);
  istringstream sstr(input);

  vector<long long> nums;
  long long e;
  while (sstr >> e) {
    nums.push_back(e);
  }

  long long b = nums[0];
  long long c = nums[1];
  long long d = nums[2];

  if (d > c) {
    cout << 0;
    return 0;
  }

  long long n = c - d;
  long long total = 0;
  if (n == 0) {
    total = max(0LL, b - c);
  } else {
    for (long long i = 1; i * i <= n; i++) { // faster algorithm
      if ((n % i) == 0) {
        if (i > d && i <= b) {
          total++;
        }
        if (i * i != n) {
          long long pdiv = n / i;
          if (pdiv > d && pdiv <= b) {
            total++;
          }
        }
      }
    }
  }
  cout << total;
}
