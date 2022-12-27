#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string, bool> m; //изначально оно false;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        if(m[s]==false){
            m[s]=true;
            cout<<"new user added"<<endl;
        }
        else cout<<"use alreade exists"<<endl;
    }
    return 0;
}