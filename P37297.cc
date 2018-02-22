#include <iostream>
using namespace std;

int operacio(int n){
int valor=0;    
   for(int a= 0; a<3;++a)    
    {
valor=n%10+valor;
    n=n/10;
    
}
    return valor;
    
}


int main() {
int n, resultat;
cin>>n;
resultat= operacio(n);
cout<<resultat<<endl;
}


