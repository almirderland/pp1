#include <bits/stdc++.h>

using namespace std;

queue < int > q;

int main(){
  int n;
  cin >> n;

  map < string , int > was;
  for (int i = 1; i <= n; i++){
    string s;
    cin >> s;
    was[s] = 1;
  }  
  int m;
  cin >> m;


  pair < string, string> ans[200001];
  for (int i = 1; i <= m; i++){
    cin >> ans[i].first >> ans[i].second;
  }
  string t;
  cin >> t;
  set < string > s;
  for (int i = 1; i <= m; i++){
    if (ans[i].first == t && was[ans[i].second] == 1){
      s.insert(ans[i].second);
    }
    else if (ans[i].second == t && was[ans[i].first] == 1){
      s.insert(ans[i].first);
    }
  }
  cout << s.size() << '\n';
  
  for (auto res : s){
    cout << res << ' ';
  }
  return 0;
}