#include <iostream>
#include <math.h>
#include <set>
#include <string>
#include <vector>

using namespace std;

set<int> primes;

bool isPrime(int num) {
  if (num <= 1) {
    return false; // Numbers less than or equal to 1 are not prime
  }
  // Check for divisibility from 2 up to the square root of the number
  for (int i = 2; i <= std::sqrt(num); ++i) {
    if (num % i == 0) {
      return false; // Found a divisor, so it's not prime
    }
  }
  return true; // No divisors found, so it's prime
}

void recursiveFindPrime(string &c_perm, string &rdigit, vector<bool> &dipakai) {

  if (!c_perm.empty()) {
    int num = stoi(c_perm);
    if (isPrime(num) && num != 1) {
      primes.insert(num);
    }
  }

  for (int i = 0; i < rdigit.length(); i++) {
    if (!dipakai[i]) {
      dipakai[i] = true;
      string temp = c_perm + rdigit[i];
      recursiveFindPrime(temp, rdigit, dipakai);
      dipakai[i] = false;
    }
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string digits;
    cin >> digits;
    vector<bool> dipakai(digits.length(), false);
    string str = "";
    recursiveFindPrime(str, digits, dipakai);
    cout << primes.size() << endl;
    primes.clear();
  }
}
