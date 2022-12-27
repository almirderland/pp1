#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n; cin >> n;
    int cntD=0;
    int cntP=0;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        for(int j=1;j<=x;j++){
            if(x%j==0){
                cntD++;
                if(isPrime(j)) cntP++;
            }
        }
    }
    cout << cntD <<" "<<cntP;
    return 0;
}