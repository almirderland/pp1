#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,i,counter=0;
  cin >> n;
  int col[150]={0};
  int fr = 1e9,sec=-1e9;

  for (i = 1; i <= n; i++)
{
    int x;
    cin>>x;
    col[x]=1;
    if (x<fr){
      fr=x;
}
    if (x>sec)
{
      sec=x;
}
}
  
  for (i=fr;i<=sec;i++)
{
    if (col[i]==0)
{
      counter++;
}
}
  cout<<counter;
  return 0;
}