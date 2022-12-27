#include <bits/stdc++.h>
using namespace std;

int main (){
    vector <int> v;
    int s;
    cin >> s;
    for (int i = 0; i<s; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.rbegin(), v.rend());


    int k;
    cin >> k; 
    int sum = 0;
    for ( int i = 0; i<k; i++){
        sum +=v[i];
    }
    cout << sum;
}


