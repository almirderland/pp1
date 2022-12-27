#include <iostream>
#include <cmath>
int x;
int n;

using namespace std;
bool f(int a[], int i)
{
    if (i == n)
    {
        return false;
    }
    if (a[i] == x)
    {
        return true;
    }

    return f(a, i + 1);
}
int main()
{
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x;
    if (f(a, 0) == true)
    {
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}
