#include <iomanip>
#include <iostream>

using namespace std;

double volume(double l, double w, double h) {
  return (l - 2 * h) * (w - 2 * h) * h;
}

double ternarysearch(double lo, double hi, double l, double w) {
  while (hi - lo > 1e-8) {
    // double m1 = lo + (hi - lo) / 3.0;
    // double m2 = hi - (hi - lo) / 3.0;
    double m1 = (lo + lo + hi) / 3;
    double m2 = (lo + hi + hi) / 3;
    double v1 = volume(l, w, m1);
    double v2 = volume(l, w, m2);
    if (v1 > v2) {
      hi = m2;
    } else {
      lo = m1;
    }
  }
  return volume(l, w, max(lo, hi));
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int l, w;
    cin >> l >> w;
    double hi = min(l, w) / 2.0;
    double result = ternarysearch(0, hi, l, w);
    cout << fixed << setprecision(7) << result << endl;
  }
}
