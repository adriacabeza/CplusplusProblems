
/*
Entrada

L’entrada comença amb un natural n, seguit de les n paraules que cal localitzar a la sopa de lletres. A continuació venen dos naturals a i b entre 1 i 20 que defineixen les mides de la sopa de lletres, seguits de les a× b lletres, totes majúscules.

Sortida

Per a cada paraula de l’entrada, cal escriure una línia amb el nombre de vegades que apareix horitzontalment (d’esquerra a dreta) i verticalment (de dalt cap a baix). Les paraules han de sortir ordenades decreixentment segons el nombre d’aparicions i, en cas d’empat, creixentment en ordre alfabètic. Seguiu el format dels exemples.

Pista

Considereu usar un vector d’elements d’aquest tipus en el vostre programa:

     struct Info {
         string par;
         int num; // comptador d’aparicions
     };
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

//declaro dos noves estructures que són la de direcció i la posició
struct Dir {

         int x,y;};

struct Pos {

         int x,y;};

struct Info { string par; 
         int num; // comptador d’aparicions 
};
typedef vector<Info> output_info;




//declaro la estructura matriu

typedef vector <char> Row;
typedef vector <Row> Matrix;

//funció que rep la Matriu, la paraula i una posició x,y(que vaig variant al main amb dos fors)

bool found(const Matrix& M, string s, const Pos& p, const Dir& d){
         int f= M.size();
         int c= M[0].size();
         int i=p.x;
         int j=p.y;
         int tam_s=s.size();
    //comprovo a la posició si, o són diferents les lletres que són aquests ifs de sota
     //comprovo si finalment la i i la j(posicións x i y) s han passat de la Matriu quan he anat fent això
    //si no es dóna cap d'aquests casos retorno un true perquè vol dir que l'he trobat ;D
                  for(int k=0;k<tam_s;++k) {
                  if(i<f && j<c){
                           if (M[i][j] != s[k] && char(M[i][j]-'a'+'A')!= s[k])
                                    return false;
                                    i= i+d.x;
                                    j= j+d.y;}

                                    else return false;

                  }
                  return true;

};
 


//funcions per a introduir les paraules, la matriu i imprimir-la un cop ja canviada 

void read_words(vector<string>& v){
         int tam= v.size();
         for(int i=0;i<tam;++i) cin>>v[i];
}

void read_matrix(Matrix& M)
{
         int f= M.size();
         int t= M[0].size();
         for(int i=0;i<f;++i) {
                  for(int j=0;j<t;++j){
                  cin>>M[i][j];
};
}}

bool comp(Info a, Info b){
        if(a.num==b.num){return a.par<b.par;}
         else return a.num>b.num;
//volem fer un return de paraules segons 
}

void write_words(output_info& a) {
        int n=a.size();         
       /*  for(int i=0;i<n;++i){
                  for(int j=0;j<n;++j){
                            if(a[i].num>a[j].num) swap(a[i],a[j]);
                           if(a[i].num==a[j].num) {
                                    if (a[i].par<a[j].par){swap(a[i],a[j]);}}
                  }
         }
          */
        
         sort(a.begin(),a.end(),comp);


             
         for(int i=0;i<n;++i){cout<<a[i].num<<" "<<a[i].par<<endl;} 
}

           


int main(){
        
         int n,f,c;
         cin>>n;
                  vector<string>v(n);
                   output_info paraules(n);
                  read_words(v);
         cin>>f>>c;
                  Matrix M(f,Row(c));
                  read_matrix(M);
                  Dir vertical;
                  Dir horitzontal;
                  Dir diagonal;
                  vertical.x=1;
                  vertical.y=0;
                  horitzontal.x=0;
                  horitzontal.y=1;
                  //diagonal.x=1;
                 // diagonal.y=1;
            
                  Pos pos;
       
                  for(int k=0; k<n;++k){
                  int count=0;
                        for (pos.x = 0; pos.x < f; ++pos.x) {
                                for (pos.y = 0; pos.y < c; ++pos.y){
                                       if (found(M, v[k], pos, vertical))++count;
                                        if (found(M, v[k], pos, horitzontal)) ++count;
                                     //   if (found(M, v[k], pos, diagonal))++count;
                                }
                         }
//en aquest punt tinc la paraula a v[k] i el numero de vegades que apareix a count
              paraules[k].par=v[k]; paraules[k].num=count;


} write_words(paraules);
}