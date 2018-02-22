#include <iostream>
#include <map>
using namespace std;

int main(){
    string paraula, p2;
    map<string,int> m;
    map<string,int>::iterator it;
    
    while(cin >> paraula){
        if(paraula == "store"){
            cin >> p2;
            it = m.find(p2);
            if(it == m.end()){ 
                m.insert(make_pair(p2,1));
            }
            else {
                ++it->second;           
            }
        }
        else if(paraula == "minimum?"){
            if(m.empty()) cout<< "indefinite minimum"<<endl;
            else{
            cout<<"minimum: "<< m.begin()->first<<", "<<m.begin()->second << " time(s)" << endl;}
        }
        else if(paraula == "delete"){
            cin >> p2;
            it = m.find(p2);
            if(it != m.end()){
                if(it->second > 1){
                    --it->second;}
                else{
                    m.erase(it);             
                }
            }
        }        
        else{
             if(m.empty()) cout<< "indefinite maximum"<<endl;
            else{
                it = m.end();
                --it;
            cout<<"maximum: "<< it->first<<", "<<it->second << " time(s)" << endl;}
            //maximum
        }
    }
}
