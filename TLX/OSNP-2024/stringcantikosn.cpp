#include <algorithm>
#include <iostream>

using namespace std;

string input;
string pola[6] = {"OSN", "ONS", "NSO", "SON", "SNO", "NOS"};
int cekPola(int idPola) {
  int j = 0;
  int matchingChar = 0;
  for (int i = 0; i < input.size(); i++) {
    if (input[i] == pola[idPola][j]) {
      matchingChar++;
      j++;
      j %= 3;
    }
  }
  return matchingChar;
}

int main() {
  cin >> input;

  int m = 0;
  for (int i = 0; i < 6; i++) {
    int val = cekPola(i);
    m = max(m, val);
  }
  if (m < 3) {
    cout << -1;
  } else {
    cout << m;
  }
}
