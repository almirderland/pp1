#include <bits/stdc++.h>
using namespace std;

int main (){
vector<int> v;
    int s;
    cin >> s;
   
    for( int i = 0; i < s; i++){
        int a;
        cin >> a; 
         v.push_back(a); 
    }
    vector<int>::iterator ok;
 int x, y;
    cin>>x>>y;
    advance(ok, x);
    for ( int i = x ; i <=y; i++ ){
         cout << *ok << " ";
         ok++;
    }
    return 0;
}