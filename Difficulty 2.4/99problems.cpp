#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int n;
  cin >> n;
  int closest;
  int upperb = n;
  int lowerb = n;
  if (n < 10) {
    cout << 99;
    return 0;
  }
  for (int i = 1; i < 100; i++) {
    string temp = std::to_string(upperb);
    if (temp.length() <= 2) {
      cout << 99;
      return 0;
    }
    if (temp.substr(temp.length() - 2, 2) == "99") {
      break;
    }
    upperb++;
  }
  for (int i = 1; i < 100; i++) {
    string temp = std::to_string(lowerb);
    if (temp.substr(temp.length() - 2, 2) == "99") {
      break;
    }
    lowerb--;
  }
  int disup = upperb - n;
  int disdo = n - lowerb;
  if (disup < disdo) {
    cout << upperb;
  } else if (disup > disdo) {
    cout << lowerb;
  } else {
    cout << max(upperb, lowerb);
  }
}
