#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    for (int i = 0; i < s1.size(); i++) {
            if (s1[i]>='a' && s1[i]<='z') 
                s1[i]=s1[i]-32;
    }
    cout <<s1;
    return 0;
}