#include <bits/stdc++.h>

using namespace std;

vector < int > g[2001];

int main(){
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++){
    int a, b;
    cin >> a >> b;
    string s1, s2;
    s1 = to_string(a);
    s2 = to_string(b);
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    a = stoi(s1);
    b = stoi(s2);
    a = a + b;
    string s3 = to_string(a);
    reverse(s3.begin(), s3.end());
    a = stoi(s3);
    cout << a << '\n';
  }
  return 0;
}