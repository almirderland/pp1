
#include <bits/stdc++.h>

using namespace std;

int main(){
string s, t;
getline(cin, s);
getline(cin, t);
vector<string> vs;
int j = 0; string x;
for(int i = 0; i < s.size(); i++){
    bool ok = false;
    if(i == s.size() || s[i] == ' '){
        x = s.substr(j, i - j);
        if(t.find(x) != string :: npos) ok = true;
        j = i + 1;
    }
    if(ok) vs.push_back(x);
    x.clear();
}
for(int i = 0; i < vs.size(); i++) cout << vs[i] << " ";
return 0;
}