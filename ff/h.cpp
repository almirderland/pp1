#include <bits/stdc++.h>

using namespace std;

string a, b;

void make_equal(){
  int cur = -1;
  int sz = a.size(), szb = b.size();
  while(sz > cur + szb + 1){
    cur++;
    b += b[cur];
  }
}

void solve(){
  for (int i = 0; i < a.size(); i++){
    int v = int(b[i]) - 97;
    int ch = int(a[i]) + v;
    if (ch >= 123){
      cout << char(ch - 26);
    }
    else{
      cout << char(ch);
    }
  }
}

int main(){
  cin >> a >> b;
  make_equal();
  solve();
  return 0;
}