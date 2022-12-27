#include <bits/stdc++.h>

using namespace std;

int main(){

int n;
cin>> n;
vector<int> v;
for (int i=0; i<n; i++){
int x;
cin >> x;
v.push_back(x);
}
map <int,  pair<int, int> > mp;
for (int i=0; i< v.size(); i++){
int sum=0;
int cnt=0;
for (int j=1; j<= v[i]; j++){
if (v[i]%j==0){ cnt++;
sum+=j;
}}
mp[v[i]]=make_pair(cnt, sum);
}
map <int,  pair<int, int> >:: iterator it;
for (it= mp.begin(); it!=mp.end(); it++)
cout<< (*it).first<<" "<< (*it).second.first<<" "<< (*it).second.second<< endl;


return 0;
}