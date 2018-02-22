#include "Estudiant.hh"
#include <vector>

double media_sel(const vector<bool>& s, int ns){
        double x= 0.0;
        for(int i=0;i<s.size();++i){
            double n_i;
            cin >> n_i;
            if(s[i]) x+= n_i;
        }
        double mitjana=x/ns;
        return mitjana;
}



int main(){
    int ne, na, ns;
    cin>> ne >> na >> ns;
    vector<bool> subconjunt(na,false);

    for(int i=0; i<ns; ++i){
        int indice;
        cin>> indice;
        subconjunt[indice-1]=true;
}
    for(int j=0;j<ne;++j){
        int dni;
        cin>>dni;
        Estudiant e(dni);
        double nota= media_sel(subconjunt, ns);
        e.afegir_nota(nota);
        e.escriure();
    }
}


