#include <bits/stdc++.h>
using namespace std;

 string check(string s)
 {
   for (int i=0; i<s.size(); i++)
   {  
       if (s[i]=='a' ||  s[i]== 'i'||  s[i]== 'u'||  s[i]== 'e'||  s[i]=='o'||  s[i]== 'A'||  s[i]== 'I'||  s[i]== 'O' ||  s[i]== 'E' ||  s[i]== 'U') {
       s.erase(i,1);
       i--;
        }
        }
        return s;
}
int main(){
  string s;
  getline(cin,s);
 cout << check(s);

   
  return 0;
}
