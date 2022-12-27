#include <bits/stdc++.h>

using namespace std;

void solve(string s){
  int i = 0, current = 0;
  int length = s.size();
  while(i < length){
    current = int(s[i]) - 96;
    char c = char(123 - current);
    s[i] = c;
    i++;
  }
  cout << s << '\n';
}

int main(){
  string s;
  cin >> s;
  solve(s);
  return 0;
}