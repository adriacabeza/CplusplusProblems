
/*Your task is to write a program that reads a natural number and prints the sum of their three last digits.

Input: The input is a natural number n=100.

Output: The output is a line with the sum of the last three digits of n.
*/


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