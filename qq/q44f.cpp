#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;
  map < string, int> col;
  for (int i = 1; i <= n; i++){
    string s;
    int a;
    col[s]+=a;}
    map < string, int> :: iterator it;
  for (it=col.begin(); it!=col.end(); it++){
    if( (*it ).second<20 )
    cout << it -> first << "\n";
    }
  
  return 0;
}