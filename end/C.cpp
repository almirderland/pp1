#include <bits/stdc++.h>

using namespace std;

int main(){
  string s, t;
  cin >> s;
  t = s;
  sort(s.begin(), s.end());
  cout << "The anagram variants for string " << t << " are:\n";
  do{
    cout << s << '\n';
  }
  while(next_permutation(s.begin(), s.end()));
  return 0;
}