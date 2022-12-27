#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  int sum1=0, sum2=0;
  for (int i = 0; i < s.size(); i=i+2)
{
    char c = s[i] - '0';
    sum1+=c;
}
 for (int i = 1; i < s.size(); i=i+2)
{
    char c = s[i] - '0';
    sum2+=c;
}
if (sum1==sum2) cout<< "YES";
else cout<< "NO";

return 0;
}