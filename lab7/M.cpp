#include <iostream>
#include <cmath>
using namespace std;
int i = 1;
void simple(int n)
{

    if (i > n)
    {

        return;
    }

    else
    {
        cout << i << " ";
        i++;
        return simple(n);
    }
}

int main()
{
    int n;
    cin >> n;
    simple(n);
    return 0;
}