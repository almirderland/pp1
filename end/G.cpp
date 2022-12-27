#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int n, A, B;
    int a = 0, b =0;
    string s;
    cin >> n >> A >> B >> s;
    for (int i = 0; i < n; ++i) {
 
        if(isupper(s[i]))
            ++a;
        if(islower(s[i]))
            ++b;
    }
 
    cout << min(a*(long long)A, b * (long long) B) << '\n';
}