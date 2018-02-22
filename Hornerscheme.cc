#include <iostream>
#include <vector>
#include <cmath>
using namespace std;



int evaluate(const vector<int>& p, int x){
   int a=p.size();
   int valor=0;
   int i,j=0;
   while (i<a){
           valor=valor+ p[i] * (pow(x,j));
      ++i; ++j;}
      return valor;
}

