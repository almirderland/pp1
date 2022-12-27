#include <bits/stdc++.h>
using namespace std;

int main (){
    int a;
    cin >> a;
    set <int> s;
    int w;
    for (int i = 0; i < a; i++)
    {
       cin >> w;
       s.insert(w); 
    }
    int sum = 0;
    set<int> :: iterator it;
    for ( it = s.begin(); it != s.end(); it++){
        sum += *it;
    }
    cout << sum;
    

    return 0;
}