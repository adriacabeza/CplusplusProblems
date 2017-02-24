
/*
Your task is to write a program that reads an integer strictly positive x and a sequence of integers, and prints how many elements of the sequence are multiple of x.

Input

The input is an integer x > 0 followed by a sequence of integers.

Output

Your program must print the number of elements of the sequence that are multiple of x.
*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main(){
int x;
cin>>x;
int y;
int count=0;
  
    while(cin>>y) {if (y%x==0){++count;}

}
cout<<count<<endl;


}