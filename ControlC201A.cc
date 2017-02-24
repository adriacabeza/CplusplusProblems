
/*
A natural number is called cool if the sum of the digits which are in odd positions (starting to count on the right) is an even number. For instance, 2 and 679031 are cool, but 357199 and 607 are not.

Your task is to write a program that prints if a given number is cool or is not.

Input: The input is a natural number n.

Output: Your program must print in a line if n is cool or is not, following the format of the instaces.
*/

#include <iostream>
using namespace std;

int main() {

    int n,r;
    int a = 0;
cin>>n;
cout<<n;
 while(n!=0 ){a=a+n%10;n=n/100;}

 if (n=0) a=n;

if (a%2 == 0) cout<<" IS COOL"<<endl;
    else
    cout<<" IS NOT COOL"<<endl;

}