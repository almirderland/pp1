#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map <string, int> was;
    vector <string> v;
    for (int i = 0; i < n; ++i){
    string s;
    cin>> s;
    if (was[s] == 1){
    v.push_back(s);}
    ++was[s];
}
    if (!v.size()){
    cout << "Understandable, have a great day";
}
    else{
    for (int i = 0; i < v.size(); ++i){
    cout<< v[i]<<endl;
}
}
return 0;
}