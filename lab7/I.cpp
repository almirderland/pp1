#include <iostream>
#include <cmath>
using namespace std;

long long f()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (long long)n + f();
    }
}

int main()
{

    cout << f();

    return 0;
}