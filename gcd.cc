#include <iostream>
using namespace std;
 
    int main(){
      int a, b, resultat;
      cin>> a >> b;
      resultat= gcd (a,b);
      cout<< resultat <<endl;
    }


    int gcd (int a, int b)
    { 
      while (b!=0) 
	{return gcd (b, a%b)}
    return a; 
      };