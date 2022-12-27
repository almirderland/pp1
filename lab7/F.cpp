#include <iostream>
#include <cmath>
using namespace std;
int sum = 0;
void f(string s, int i)
{
    if (i == s.size())
    {
        return;
    }

    if ((s[i] - '0') % 2 == 0)
    {
        sum++;
    }
    return f(s, i + 1);
}

int main()
{
    string s;
    cin >> s;
    f(s, 0);
    cout << sum;

    return 0;
}