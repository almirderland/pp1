#include <bits/stdc++.h>

using namespace std;

int main(){
  int x;
  cin >> x;
  set < int > s;
  while(1){
    x++;
    s.clear();
    int x1 = x % 10;
    int x2 = x / 10 % 10;
    int x3 = x / 100 % 10;
    int x4 = x / 1000;
    s.insert(x1);
    s.insert(x2);
    s.insert(x3);
    s.insert(x4);
     
    if (s.size() == 4){
      cout << x << '\n';
      return 0;
    }
  }
  return 0;
}