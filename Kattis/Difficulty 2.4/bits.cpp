#include <iostream>

using namespace std;

int countSetBits(long long n) {
  int count = 0;
  while (n > 0) {
    n &= (n - 1);
    count++;
  }
  return count;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string input;
    cin >> input;
    long long max = 0;
    string currentstr = "";
    for (char e : input) {
      currentstr += e;
      long long cnum = stoll(currentstr);
      long long csetbit = countSetBits(cnum);
      if (csetbit > max) {
        max = csetbit;
      }
    }
    cout << max << endl;
  }
}
