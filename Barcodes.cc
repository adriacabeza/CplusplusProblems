//BARCODES

#include <iostream>
#include <string>
using namespace std;



int main(){
string numero;
         
 
while(cin>>numero){

int suma=0;
for(int i=0;i<12;++i){
         if (i%2!=0){suma=suma+((numero[i]-48) * 3); }
         if (i%2==0){suma=suma+(numero[i]-48);}}
int codi=0;


if (suma%10!=0){  codi = 10-(suma%10);     }


                  

cout<<numero;
         cout<<codi<<endl;
}
}
