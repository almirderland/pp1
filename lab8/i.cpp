#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <int> v;
    int t;
    cin >> t;
    for ( int i = 0; i < t; i++){
        int d;
        cin >> d;
        v.push_back(d);
    }
    int cnt = 0; 
    int k;
    cin >> k;
    for ( int i = 0; i<t; i++){
        if (v[i] == k){
            cnt++;
        }
    }
    if (cnt > 0){
        cout << "Yes";
    }else {
        cout << "No";
    }
    return 0;
}