#include <bits/stdc++.h>
using namespace std; 

int main (){
    vector <int> v;
    int s;
    cin >> s;
    for ( int i = 0; i < s; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int x, y;
    cin >> x >> y;
    v.insert( v.begin() + x, y);
    for ( int i = 0; i < v.size() ; i++){
        cout << v[i] << " ";
    }
}