#include <iostream>
#include <string>
#include <map>
using namespace std;


int main() {
  map<string, int> M;
  char op;
  string s;
  while (cin >> op >> s) {
    map<string, int>::const_iterator it = M.find(s);
    if (op == 'f') {
      if (it == M.end()) cout << 0 << endl;
      else cout << it->second << endl;
    }
    else if (op == 'a') {
      if (it == M.end()) M.insert(make_pair(s, 1));
      else {
	int freq = it->second;
	++freq;
	M[s] = freq;
      }
    }
  }
}


