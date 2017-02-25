
/*
An ISBN code (International Standard Book Number) is a code of ten digits that identifies books. In fact, the first nine digits represent the book, and the last digit is used to check that the ISBN code is correct. To validate an ISBN code, we must add up ten times the first digit, plus nine times the second, ..., plus once the last digit. If the sum is divisible by eleven, the ISBN code is regarded as valid.

For instance, 0201103311 is a valid ISBN code, because

    10*0 + 9*2 + 8*0 + 7*1 + 6*1 + 5*0 + 4*3 + 3*3 + 2*1 + 1*1 = 55 = 5*11.
Each of the first nine digits is a value between 0 and 9. Sometimes the last number must be 10; this is done by writing an X. For instance, 156881111X.

Write a program that computes the complet ISBN code of codes with a missing digit.

Input

Input is a sequence of valid ISBN codes but with an unknown digit marked with ‘?’.

Output For each code of the input, print in a line the unknown digit.

Observation

This problem is from “The British Informatics Olympiad for schools and colleges”.
*/

#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    string s;
    while (cin >> s){
        int incog = 0, suma = 0;
        for (int i = 0; i < s.size(); ++i){
            if (s[i] >= '0' and s[i] <= '9') suma = suma + (10 - i) * (s[i] - '0');
            else if (s[i] == 'X') suma = suma + (10 - i) * 10;
            else if (s[i] == '?') incog = 10 - i;            
        }
        bool trobat = false;
        int j = 0;
        while (not trobat and j <= 10){
            if ( (suma + j * incog) % 11 == 0) trobat = true;
            else ++j;
        }
        if (j == 10) cout << "X" << endl;
        else cout << j << endl;
    }
}