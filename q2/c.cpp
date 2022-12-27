#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[20000]={0};
  int used[20000]={0};
  int n;
  cin >> n;
  int a[10005];
  int max = -19999999;
  for (int i = 1; i <= n; i++)
{
    cin >> a[i];
    arr[a[i]]++;
    if (arr[a[i]] > max){
      max = arr[a[i]];
}
}
  sort(a + 1, a + n + 1);
  reverse(a + 1, a + n + 1);
  for (int i = 1; i <= n; i++){
    if (arr[a[i]] == max && !used[a[i]]){
      cout << a[i] << ' ';
      used[a[i]] = 1;
}
}
  return 0;
}