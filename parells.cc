#include <iostream>
using namespace std;
int main(){
  int n; 
  cin>>n;
  for(; n>0;--n) {
    int compta=0;
    int num,seg;
    cin>> num;
    if(num!=0) {
      cin>>seg; while(seg!=0){
	
	if (seg>num) ++compta; num=seg; cin>>seg; }} cout<<compta<<endl;}}