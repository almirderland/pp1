#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, m;
  string s;
  cin>>s;
  cin>>n>>m;
  char arr[105][105];
  for (int i=1; i<=n; i++)
{
    for (int j=1; j<=m; j++)
{
      arr[j][i] = 'X';
}
}
  int x=1, y=1;
  arr[1][1]='*';
  for (int i=0; i<s.size(); i++)
{
    if (s[i]=='D')

{
      y++;
      arr[x][y]='*';
}  
    else if (s[i]=='U')
{
      y--;
      arr[x][y]='*';
}
    else if (s[i]=='L')
{
      x--;
      arr[x][y]='*';
}
    else if (s[i]=='R')
{
      x++;
      arr[x][y]='*';
}
}
  for (int i=1; i<=n; i++)
{
    for (int j=1; j<=m; j++)
{
      cout <<arr[j][i];
}
    cout <<'\n';
}
  return 0;
}