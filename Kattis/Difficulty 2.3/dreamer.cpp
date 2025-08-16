#include <algorithm>
#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

set<string> tanggalunik;
string tanggalminim = "999999999";

bool isValidDate(const string &input) {
  int day = stoi(input.substr(0, 2));
  int month = stoi(input.substr(2, 2));
  int year = stoi(input.substr(4, 4));

  if (year < 2000)
    return false;
  if (month < 1 || month > 12)
    return false;

  int day_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  // bulan kabisat
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    day_month[2] = 29;
  }

  if (day < 1 || day > day_month[month])
    return false;

  return true;
}

void permutasi(string &digit, vector<bool> &pakai, string &c_perm) {
  // Pruning logic
  if (c_perm.length() == 2) {
    int day = stoi(c_perm);
    if (day < 1 || day > 31)
      return; // Basic DD check
  }
  if (c_perm.length() == 4) {
    int month = stoi(c_perm.substr(2, 2));
    if (month < 1 || month > 12)
      return; // Basic MM check
  }
  if (c_perm.length() == 8) {
    if (isValidDate(c_perm)) {
      tanggalunik.insert(c_perm);
      string yyyymmdd =
          c_perm.substr(4, 4) + c_perm.substr(2, 2) + c_perm.substr(0, 2);
      if (yyyymmdd < tanggalminim) {
        tanggalminim = yyyymmdd;
      }
    }
    return;
  }
  for (int i = 0; i < digit.length(); i++) {

    if (pakai[i]) {
      continue;
    }
    if (i > 0 && digit[i] == digit[i - 1] && !pakai[i - 1]) {
      continue;
    }

    c_perm += digit[i];
    pakai[i] = true;
    permutasi(digit, pakai, c_perm);
    pakai[i] = false;
    c_perm.pop_back();
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string input;
    string dd;
    string mm;
    string yyyy;
    cin >> dd >> mm >> yyyy;
    input = dd + mm + yyyy;
    input.erase(remove(input.begin(), input.end(), ' '), input.end());
    sort(input.begin(), input.end());

    vector<bool> pakai(8, false);
    string c_perm = "";
    permutasi(input, pakai, c_perm);

    if (!tanggalunik.empty()) {
      cout << tanggalunik.size();
      string dd = tanggalminim.substr(6, 2);
      string mm = tanggalminim.substr(4, 2);
      string yyyy = tanggalminim.substr(0, 4);
      cout << " " << dd << " " << mm << " " << yyyy << endl;
    } else {
      cout << 0 << endl;
    }
    tanggalminim = "99999999";
    tanggalunik.clear();
  }
}
