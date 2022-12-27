#include <iostream>
#include <cmath>

using namespace std;

 bool check(string s, int x){
     int cnt=0;
   for (int i=0; i<s.size(); i++){  
       if (s[i]>='0' &&  s[i]<= '9') cnt++;
        }
    if(cnt>=x) return true;
        return false;
}
int main(){
  int x;
  string s;
  cin>>s>>x;

  if(check(s,x)) cout<< "YES";
  else cout<<"NO";
   
  return 0;
}
