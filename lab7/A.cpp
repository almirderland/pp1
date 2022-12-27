#include <iostream>
#include <cmath>
int n;
using namespace std;
int degree_of2(int n)
{
    if (n == 0)
        return 1;
    return degree_of2(n - 1) * 2;
}
int main()
{

    cin >> n;
    cout << degree_of2(n);

    return 0;
}