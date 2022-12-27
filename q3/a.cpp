#include <bits/stdc++.h>
using namespace std;
bool VanyaandPrimes(int N)
{
    int value = 0;
    for (int j = 2; j < N; j++)
    {
        if (N % j == 0)
        {
            value = 1;
            break;
        }
    }
    if (value == 0) return true;
    else return false;
}
void solve()
{
    int N;
    cin >> N;
    int a = 1, cnt = 0;
    while (1){
        a++;
        if(VanyaandPrimes(a))
            cnt++;
        if( cnt == N)
        {
            cout << a;
            break;
        }
    }
}
int main() {
    solve();
}