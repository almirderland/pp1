#include <bits/stdc++.h>

using namespace std;

int main() {
    string s,s2;
    cin >> s;
    bool ok = true;
    s2=s;
    s.erase(1);

    s=s2+s;
    
    
    for (int i = 0, j = s.size() - 1; i < j; i++, j--)
        if (s[i] != s[j])
            ok = false;

    if (ok == true)
        cout << "YES";
    else
        cout << "NO";
    
    

    return 0;
}