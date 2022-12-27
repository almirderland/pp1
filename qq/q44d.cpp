#include <bits/stdc++.h>
using namespace std;
string k;
int main(){
  string s;
  cin >> s;
  for(int i = 0; i < s.size(); i++){
    if(s[i] == '*' && s[i] == s[i+1]){
      
    }else {
      k+=s[i];
    }
  }
  cout << k;
}
