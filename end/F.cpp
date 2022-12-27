#include <bits/stdc++.h>

using namespace std;

void solve(string s){
  int i = 0, length = s.size();
  int letters = 0, current = 0;
  string v, q;
  while(i < length){
    if (s[i] != ' '){
      letters++;
      v = v + s[i];
    }
    else{
      if (letters > current){
        current = letters;
        q = v;
      }
      letters = 0;
      v.clear();
    }
    i++;
  }
   if (letters > current){
        current = letters;
        q = v;
  }
  
  cout << q << '\n';
}

int main(){Ы
  string s;
  getline(cin, s);
  solve(s);
  return 0;
}