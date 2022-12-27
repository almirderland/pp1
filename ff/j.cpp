#include <bits/stdc++.h>

using namespace std;

string s1, s2;

int main(){
    cin >> s1 >> s2;
    int kk= 0;
    while(kk < 1111){
        if(s1 == s2){
            cout << kk;
            return 0;
        }
        kk++;
        string next;
        for(int i = 1; i < s2.size(); i++){
            next += s2[i];
        }
        next += s2[0];
        s2 = next;
    }
    cout << "Understandable have a nice day";
}