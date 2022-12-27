#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin >> s ;

  int u[1000]={0}; 

  for (int i = 0; i < s.size(); i++){
      if (!u[s[i]])
{
      u[s[i]] = 1;
}
      else{
      cout << s[i];
    }
  }
  return 0;
}