#include <bits/stdc++.h>
using namespace std; 
void PrimeFactors(int n, int a) 
{ 
    if (n==1) return; 
    if (n%a==0) 
    { 
        cout<<a<<" "; 
        PrimeFactors(n/a, a); 
    } 
    else 
    if (a==2) 
    PrimeFactors(n, a+1); 
    else 
    PrimeFactors(n, a+2); 
} 
int main() 
{ 
    int n, a=2;  
    cin>>n; 
    PrimeFactors(n, 2); 
 return 0; 
}