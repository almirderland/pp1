#include <bits/stdc++.h>

using namespace std;

int main(){
  string a, b;
  cin >> a >> b;
  int pos = a.find(b);
  int pos1 = b.find(a);
  
  if (pos == -1 && pos1 == -1){
    cout << a << b << '\n';
  }
  else{
    if (pos != -1){
      cout << a << '\n';
    }
    else if (pos1 != -1){
      cout << b << '\n';
    }
  }
  return 0;
}