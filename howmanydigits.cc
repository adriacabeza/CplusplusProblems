#include <iostream>
using namespace std;

int main(){
int b,n,resultat,count;
count= 0;

    while(cin>>b,n) {
  
    while (n != 0) {resultat=n%b; n=n/b; 
  
   while (resultat != 0) {resultat= resultat/10; ++count;  }}


    cout<<count<<endl;

}
}


