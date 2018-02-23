#include <iostream>
using namespace std;
#include <vector>

int main(){
    int max,min,n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;++i){
        cin>>v[i];
    }
    max=v[0];
    min=v[0];
    for(int i=0;i<n;++i){
        if(max>v[i) max=v[i];
        if(min<v[i]) min=v[i];
    }
cout<<max<<" "<<min<<endl;
}
