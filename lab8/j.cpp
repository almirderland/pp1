#include <bits/stdc++.h>
using namespace std; 

int main (){
    vector <int> v;
    int s;
    cin >> s;
    for ( int i = 0; i<s; i++){
        int d;
        cin >> d;
        v.push_back(d);
    }
    sort(v.begin(), v.end());
    cout << v.back() - v.front();
}