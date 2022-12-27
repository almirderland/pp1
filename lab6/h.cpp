#include <bits/stdc++.h>
using namespace std;
 bool check(string s)
 {
   for (int i=0; i<s.size(); i++)
   {  
       if (s[i]=='1' ||  s[i]== '3'||  s[i]== '5'||  s[i]== '7'||  s[i]=='9') 
       return false;
    }
        return true;
}
int main(){
  string s;
  cin>>s;
  if(check(s)) cout<< "Valid";
  else cout<<"Not valid"; 
  return 0;
}
