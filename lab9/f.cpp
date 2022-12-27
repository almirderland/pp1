#include <iostream>
#include <stack>

using namespace std;

int main(){
  string line;
  stack<char> s; 
  cin >> line;
  for(int i = 0; i < line.size(); i++){
    if(line[i] == '(')
      s.push(line[i]);
    else {
      if(s.empty()){
        cout << "NO";
        return 0;
      }
      s.pop();
    }
  }
  if(s.empty())
    cout << "YES";
  else 
    cout << "NO";
return 0;
}
