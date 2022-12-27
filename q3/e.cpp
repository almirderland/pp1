#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a;
    set<int> v;


    for(int i=0; i<a; i++){
    cin>> b;
    v.insert(b);}

    if(a==v.size())
        cout<<"Yes";
        
    else
        cout<<"No";

    return 0;
}