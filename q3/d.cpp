

#include <bits/stdc++.h>
using namespace std;
string f(string s, string a)
{
    for(int i = 0; i < s.size(); i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        if(s[i] == 'c'){
            s[i] = 's';}
        if(s[i] == 'a'){
            s[i] = 'o';}

        if(a[i] == 'c'){
            a[i] = 's';}
        if(a[i] == 'a'){
            a[i] = 'o';}
    }
    if(s== a){
    return "Yes\n";
    } else {
        return "No\n";}
}
string s, a;
int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >>s>>a;
        cout << f(s, a);
    }
    return 0;
}