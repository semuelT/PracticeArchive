#include <iostream>
#include <map>
#include <string>

using namespace std;

void solve(int caseNum) {
  string alien_number;
  string source_language;
  string target_language;

  cin >> alien_number >> source_language >> target_language;

  long long translated_number = 0;
  int source_base = source_language.length();

  map<char, int> source_map;
  for (int i = 0; i < source_base; ++i) {
    source_map[source_language[i]] = i;
  }

  for (char digit_char : alien_number) {
    int digit_value = source_map[digit_char];
    translated_number = translated_number * source_base + digit_value;
  }

  string output = "";
  int target_base = target_language.length();

  if (translated_number == 0) {
    output = string(1, target_language[0]);
  } else {
    while (translated_number > 0) {
      int sisa = translated_number % target_base;
      output = target_language[sisa] + output;
      translated_number /= target_base;
    }
  }

  cout << "Case #" << caseNum << ": " << output << endl;
}

int main() {
  int t;
  cin >> t;
  for (int i = 1; i <= t; ++i) {
    solve(i);
  }
  return 0;
}
