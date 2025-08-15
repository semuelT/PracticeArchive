#include <cstddef>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  cin.tie(NULL);
  int n, e;
  cin >> n >> e;
  vector<set<int>> ceritapenduduk(
      n +
      1); // vector berindex 1 untuk penduduk dengan cerita yang mereka ketahui
  int idcerita = 1;

  ceritapenduduk[1].insert(idcerita); // penyair

  while (e--) {
    int k;
    cin >> k;
    int pendudukHadir[k];
    for (int i = 0; i < k; i++) {
      int pid;
      cin >> pid;
      pendudukHadir[i] = pid;
    }
    bool penyairada = false;
    for (int pid : pendudukHadir) {
      if (pid == 1) {
        penyairada = true;
        break;
      }
    }

    if (penyairada) {
      for (int pid : pendudukHadir) {
        ceritapenduduk[pid].insert(idcerita);
      }
      idcerita++;
    } else {
      set<int>
          ceritadibagipenduduk; // mengumpul setiap cerita dari setiap penduduk
      for (int pid : pendudukHadir) {
        ceritadibagipenduduk.insert(ceritapenduduk[pid].begin(),
                                    ceritapenduduk[pid].end());
      }

      for (int pid : pendudukHadir) {
        ceritapenduduk[pid] = ceritadibagipenduduk;
      }
    }
  }
  set<int> ceritapenyair = ceritapenduduk[1];

  for (int i = 1; i <= n; i++) {
    if (ceritapenyair.size() ==
        ceritapenduduk[i]
            .size()) { // urutan cerita dalam mungkin tidak sama maka cek ukuran
      cout << i << endl;
    }
  }
}
