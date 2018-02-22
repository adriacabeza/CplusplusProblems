#include <iostream>
#include <cmath>
using namespace std;



int main(){
    int a,b,c,d;    
    bool found=false;
    cin>>a>>b>>c>>d;
          for(int i=a; i<=b and not found;++i) {
               for(int j=c; j<=d and not found;++j) {
                        double total = sqrt(i*i+j*j);  
                         int num= int(total);
                        if (total== double(num)){
                         {found=true; cout<<i<<"^2"<<" + "<<j<<"^2"<<" = "<<total<<"^2"<<endl;}
                  }}}
                 
              if (not found) {cout<< "No solution!"<<endl;}
}
               
          


 

