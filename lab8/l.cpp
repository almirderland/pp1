#include <bits/stdc++.h>
using namespace std;

int main (){
    int a;
    cin >> a;
    set <int> e;
    int w;
    for (int i = 0; i < a; i++)
    {
        cin >> w;
        e.insert(w);
    }
    cout << e.size();

    return 0;
} 