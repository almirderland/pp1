#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  map < int, map<int, int> > col;
  for (int i = 1; i <= n; i++){
    int a, b;
    cin >> a >> b;
    if (a > b){
      swap(a, b);
    }
    cout << col[a][b] << '\n';
    col[a][b]++;
  }
  return 0;
}