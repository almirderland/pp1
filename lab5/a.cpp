
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin >> s1;
    int cntb = 0, cnts=0;
    for (int i = 0; i < s1.size(); i++) {
            if (s1[i]>='a' && s1[i]<='z') 
                cntb++;
            else cnts++;
    }
    cout << cntb<<" "<<cnts;
    return 0;
}