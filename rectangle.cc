#include <iostream>
using namespace std;


int main() {
    
  bool primer=true;
  int fil,col;
  
  
  while(cin>>fil>>col){  
    if(primer)
      primer=false;
    else
      cout<<endl;
    int num=9;
    for (int i=1;i<=fil;++i){
      for(int j=1;j<=col;++j){
	    cout<<num;
	    --num;
	    if (num==-1)
	      num=9;
      }cout<<endl;
    
    
    
    }
 
} 
}
    
    
    
    
    
