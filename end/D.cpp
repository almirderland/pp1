#include <bits/stdc++.h>

using namespace std;

int main(){
  string s, t;
  cin >> s >> t;
  int id = -1;
  while(1)
  {
    id++;
    if (id + t.size() > s.size()){
      break;
    }
    int index = - 1;
    bool ok = 1; 
    for (int i = id; i < id + t.size(); i++){
      index++;
      if (s[i] != t[index]){
        ok = 0;
        break;
      }
    }
    if (ok){
      cout << id << ' ';
    }
  }
  return 0;
}