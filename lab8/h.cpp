#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <int> v;
    int d;
    cin >> d;
    for ( int i = 0; i<d; i++){
        int w;
        cin >> w;
        v.push_back(w);
    }
    sort(v.begin(), v.end());
    int k;
    cin >> k;
    for ( int i = 0; i<k; i++){
    
    cout << v[i] << " ";
    
}
}