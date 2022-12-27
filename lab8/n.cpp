#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >>n;
    set <int> s;
    for (int i = 0; i < n; i++){
        int w;
        cin >> w;
        if ( w % 2 != 0){
        s.insert(w);
        }

    }
    set <int>  :: iterator it;
    for ( it = s.begin() ; it != s.end() ; it++){
        cout << (*it) << " ";
    }

    return 0;
}