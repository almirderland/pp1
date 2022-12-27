#include <bits/stdc++.h>
using namespace std;

int main (){
vector<int>d;
    int s;
    cin >> s;
    for( int i = 0; i < s; i++){
        int a;
        cin >> a; 
         d.push_back(a); 
    }
    reverse ( d.begin(), d.end());

    for ( int i = 0;  i < s; i++){
        cout << d[i] << " ";
    }
}