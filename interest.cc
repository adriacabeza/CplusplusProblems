#include <iostream> 
#include <cmath>
using namespace std;

 

int main(){
 cout.setf(ios::fixed); cout.precision(4);
double c,i;
int t;
string a;
  cin>>c>>i>>t>>a;
  if (a=="simple") {
  c=c+(i*c/100)*t;
  
  cout<<c<<endl;}
  if (a=="compound"){
    c=c*(pow(1+i/100,t))
    ;
  cout<<c<<endl;}

  
  
}