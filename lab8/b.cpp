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
    ok=v.end()-1;
    for ( int i = 0 ; i <= v.size()-1; i++ ){
         cout << *ok << " ";
         ok--;
    }
    return 0;
}