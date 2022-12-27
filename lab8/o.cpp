#include <bits/stdc++.h>
using namespace std; 

int main (){
    string d;
    cin >> d;
    set <char> s;
     for ( int i = 0; i < d.size() ; i++){
         s.insert(tolower(d[i]));
     }
     cout << s.size() << endl;

    set <char> :: iterator it;

    for ( it = s.begin(); it != s.end(); it++){
        cout << (*it) << " ";
    } 
}