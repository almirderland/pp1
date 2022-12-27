#include <bits/stdc++.h>
#define f first
#define s second

using namespace std;

queue < int > q;

int main(){
  int n;
  cin >> n;
  string name[n + 5], last[n + 5];
  pair < double, int > ans[n + 5];
  double grade[n + 5];
  for (int i = 1; i <= n; i++){
    cin >> last[i] >> name[i];
    int m;
    cin >> m;
    double num = 0, cnt = 0;
    while(m--){
      string s;
      int col;

      cin >> s >> col;
      if (s.size() == 1){
        if (s[0] == 'A'){
          num += col;
          cnt += (3.75 * col);
        }
        else if (s[0] == 'B'){
          num += col;
          cnt += (3.0 * col);
        }
        else if (s[0] == 'C'){
          num += col;
          cnt += (2.0 * col);
        }
        else if (s[0] == 'D'){
          num += col;
          cnt += (1.0 * col);
        }
        else{
            num += col;
        }
      }
      else{
        if (s[0] == 'A'){
          num += col;
          cnt += (4 * col);
        }
        else if (s[0] == 'B'){
          num += col;
          cnt += (3.5 * col);
        }
        else if (s[0] == 'C'){
          num += col;
          cnt += (2.5 * col);
        }
        else if (s[0] == 'D'){
          num += col;
          cnt += (1.5 * col);
        }
      }
    }
    double v = cnt / num;
    grade[i] = v;
    ans[i].f = v;
    ans[i].s = i;
  }
  sort(ans + 1, ans + n + 1);
  for (int i = 1; i <= n; i++){
      for (int j = i + 1; j <= n; j++){
          if (ans[i].f == ans[j].f){
              if (last[ans[i].s] > last[ans[j].s]){
                  swap(ans[i], ans[j]);
              }
              else if (last[ans[i].s] == last[ans[j].s]){
                  if (name[ans[i].s] > name[ans[j].s]){
                      swap(ans[i], ans[j]);
                  }
              }
          }
          else{
              break;
          }
      }
  }
  cout.precision(3);
  for (int i = 1; i <= n; ++i){
      cout << fixed << last[ans[i].s] << ' ' << name[ans[i].s] << ' ' << ans[i].f << '\n';
  }
  return 0;
}