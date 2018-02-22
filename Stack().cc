#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<char> x;
    char y;
    cin>>y;
    bool incorrecto= false;
    if (y ==')' or y == ']') incorrecto=true;
    else x.push(y);

    while(not incorrecto and cin>>y and y != '.'){
      if(y == '(' or y=='[') x.push(y);
      else if (y == ')') {
        if(not x.empty() and x.top() == '(') x.pop();
        else incorrecto = true; }
      else if (y == ']') {
        if(not x.empty() and x.top() == '[') x.pop();
        else incorrecto = true;
      }
    }
    if(x.empty() == false) incorrecto = true;

    if(incorrecto) cout << "Incorrecte" << endl;
    else cout << "Correcte" << endl;
}
