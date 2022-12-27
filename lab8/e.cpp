#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <int> v;
    int s;
    cin >> s;
    for ( int i = 0 ; i < s; i++){
        int t;
        cin >> t;
        v.push_back(t);
    }
    int x, y;
    cin >> x >> y;
    v.erase(v.begin() + x, v.begin() + y + 1);
    for ( int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
}