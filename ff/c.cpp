#include <bits/stdc++.h>

using namespace std;

deque < int > q;

int main(){
  int n;
  cin >> n;
  while(n--){
    int a;
    cin >> a;
    while(!q.empty() && q.back() <= a) {
      q.pop_back();
    }
    q.push_back(a);
  }
  cout << q.size() << '\n';
  return 0;
}