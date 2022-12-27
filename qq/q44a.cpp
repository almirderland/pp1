#include <bits/stdc++.h>

using namespace std;

int main(){
  int n, m;
  cin >> n;
  map < string, pair<int,int> col;
  for (int i = 1; i <= n; i++){
    string s;
    int a, b;
    cin >> s >> a >> b;
    col[s]=a+b;}
    cin>> m;
    vector <string> v;
for ( int i=0; i<m; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
  for (int i=0; i< v.size(); i++ ){
      cout<< col[v[i]]<< "\n";             
  }
  
  return 0;
}