#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  cin >> n;

  for (int i = 1; i <= n; i++){
  if (n%i==0)          
  cout<<i<<" ";
  }
   if (n%2==0)
  cout<<'\n'<<"even"<<'\n';
  else cout<<'\n'<<"odd"<<'\n';
  while (n>9)
  {
     n=n%10;  
  }
  
 cout<<n;
  
  return 0;
}