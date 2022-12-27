#include <bits/stdc++.h>
using namespace std;

bool isPrime( int n){
    if ( n == 1 ) {
        return false;
    }
    else {
        for ( int i = 2; i < sqrt(n); i++) {
            if ( n%i == 0) return false;
        }
    }
    return true;
}
int main (){
    int e;
    cin >> e; 
    vector <int> v; 
    for ( int i = 0; i < e; i++){
        int w;
        cin >> w;
        v.push_back(w);
    }
    int l;
    cin >> l;
    int cnt = 0; 
    for ( int i = 0; i<v.size(); i++ ){
        if ( isPrime(v[i]) && v[i] > l)
        cnt++ ;
    }
    cout << cnt;
}