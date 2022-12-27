#include <bits/stdc++.h>
using namespace std;
int main()
{
  int cnt[305]={0};
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++)
{
    char c = s[i] - '0';
    cnt[c]++;
}
  int i = 0;
  while(i <= 9)
{
    if (cnt[i])
{
      cout << i << ':' << ' ' << cnt[i] << '\n';
}
    i++;
}
  return 0;
}