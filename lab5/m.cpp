
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    char x;
    int n;
    cin >> s1>>x>>n;
    int cntb = 0;
    for (int i = 0; i < s1.size(); i++) {
            if (s1[i]==x) 
                cntb++;
    }
    if(n==cntb)
    cout <<"YES";
    else cout<<"NO";
    return 0;
}