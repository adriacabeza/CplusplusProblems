
/*Les seqüències d’àcid nucleïc són cadenes compostes amb les bases adenina (A), tiamina (T), citosina (C) i guanina (G). La base complementària de l’adenina és la tiamina, la de la citosina és la guanina, i viceversa en ambdós casos.

Feu un programa que donada una seqüència d’àcid nucleïc, n’escrigui la seqüència complementària a partir de la primera aparició del patró TAG.

Per exemple, donada la seqüència GATAGATAGGCCAGCCT, cal escriure TATCCGGTCGGA.

El vostre programa ha de definir i utilitzar la funció

     char complement(char c);
que, donada una base, retorna la seva base complementària.

Entrada: L’entrada és una cadena de com a mínim 3 caràcters A, C, T, o G.

Sortida: La sortida és una línia amb la seqüència complementària de la seqüència d’entrada a partir de la primera aparició del patró TAG. Si TAG no apareix a l’entrada, només cal escriure una línia buida.
*/

#include <iostream>
using namespace std;

char complement(char c){
 if(c =='C') return 'G';
 if(c =='G') return 'C';
 if(c =='A') return 'T';
 if(c =='T') return 'A';
}

int main() {
        char c;
        int es = 0;
        bool seq = false;
                while (not seq && cin >> c) {
                        if (es == 0) {
                                if (c == 'T') ++es;
                        }
                        else if (es == 1) {
                                if (c == 'A') ++es;
                                else if (c != 'A' or c != 'T') --es;
                        }
                        else if (es == 2) {
                                if (c == 'G') ++es;
                                else if (c == 'T') --es;
                                else es = 0;
                        }
                        if (es == 3) seq = true;
                }
                if (seq) {
                        while (cin >> c) cout << complement(c);
                }
        cout << endl;
}
         