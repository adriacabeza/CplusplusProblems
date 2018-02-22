#include <iostream>
#include <vector>
#include "Estudiant.hh"
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<Estudiant> v(n);

    for(int i = 0; i < n; ++i) {
      v[i].llegir();
    }

    vector<Estudiant> r;
    Estudiant a = v[0];
    for(int i = 1; i < n; ++i) {
      Estudiant b = v[i];
      if(a.consultar_DNI() == b.consultar_DNI()) {
          if(a.te_nota() and b.te_nota()) {
            if(a.consultar_nota() < b.consultar_nota()) a.modificar_nota(b.consultar_nota());
          }
          else if(b.te_nota()) {
            a.afegir_nota(b.consultar_nota());
          }    
      }
      else {
    r.push_back(a);
    a = b;
      }
    }
    r.push_back(a);

    for(int i = 0; i < r.size(); i++) {
      r[i].escriure();
    }
}
