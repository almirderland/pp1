#include <bits/stdc++.h>
using namespace std;
int maxi(int a,int b, int c, int d)
{
    return max(max(a,b),max(c,d));
}
int main()
{
    int m,n,a,b;
    cin>>m>>n>>a>>b;
    cout<<maxi(m,n,a,b);
    return 0;
}