#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, w;
  std::cin >> n >> w;

  long long initial_minutes = (long long)w * 60;
  std::vector<int> temperatures(n);
  std::vector<long long> usage_times(n);

  for (int i = 0; i < n; ++i) {
    std::cin >> temperatures[i];
    usage_times[i] = temperatures[i] * 2;
  }

  int longest_period = 0;
  long long current_usage = 0;
  int left = 0;

  for (int right = 0; right < n; ++right) {
    current_usage += usage_times[right];

    while (current_usage > initial_minutes) {
      current_usage -= usage_times[left];
      left++;
    }

    longest_period = std::max(longest_period, right - left + 1);
  }

  std::cout << longest_period << std::endl;

  return 0;
}
