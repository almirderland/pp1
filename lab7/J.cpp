#include <iostream>
#include <cmath>
using namespace std;
int sum = 0;
void f(int n)
{
    if (n == 0)
    {
        return;
    }
    else
        sum += (n % 10) / 2;
    return f(n / 10);
}
int main()
{


    return 0;
}