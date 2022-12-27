#include <bits/stdc++.h>

using namespace std;

bool prime(int n){
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            return 0;
    return 1;
}
int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++){
        if(prime(i)){
            int m = n - i;
            if(prime(m)){
                cout << i << " " << m;
                return 0;
            }
        }
    }
}

