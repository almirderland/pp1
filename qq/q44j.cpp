#include <bits/stdc++.h>

using namespace std;

int main(){
int n; cin >> n;
vector<int> v;
for(int i = 0; i < n; i++){
    int x; cin >> x;
    v.push_back(x);
}
map<int, pair<int, int> > mp;
for(int i = 0; i < v.size(); i++){
    int cnt = 0, sum = 0;
    for(int j = 1; j <= v[i]; j++){
        if(v[i] % j == 0){
            cnt++; sum += j;
        }
    }
    mp[v[i]] = {cnt, sum};
}
map<int, pair<int, int> > :: iterator i;
for(i = mp.begin(); i != mp.end(); i++){
    cout << i->first << " => " << i->second.first << " " << i->second.second << "\n";
}
return 0;
}