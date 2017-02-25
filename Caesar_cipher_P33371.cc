
/*
Write a program that encrypts messages with the “Caesar cipher”, used by Julius Caesar to communicate with his generals. Given a constant k, each letter of the original message is replaced by the letter that is alphabetically k positions to its right (circularly, if needed). For instance, if k = 5, we must change ‘a’ by ‘f’, ‘b’ by ‘g’, …, ‘y’ by ‘d’, and ‘z’ by ‘e’.

To solve this exercise, it can be useful a function
     char encoded(char c, int k);
that returns the character corresponding to c when the constant is k.

Input: Input consists of several cases. Each case begins with a natural number k > 0, followed by a text made up of only lowercase letters and separator characters, but with no spaces, and ended with a dot.

Output: For each case, print in a line the encrypted text, using uppercase letters. Replace each ‘_’ with a space, and leave unchanged the rest of separator characters.
*/

#include <iostream>
using namespace std;


char encoded(char c,int k){
char result;
if (c=='_') return ' ';
else if (c>='a' and c<='z')return 'A'+(c-'a'+k)%26;
else return c;
}



int main(){
int k;
char c;
       while(cin>>k){
         while(cin>>c and c!='.'){
              
         cout<<encoded(c,k);}
cout<<endl;
         
}
}