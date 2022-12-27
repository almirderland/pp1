#include <iostream>

using namespace std;

int sum = 0;
int maxi = -(__INT32_MAX__);

void f(string s, int i)
{
    if (i == s.size())
    {
        return;
    }
    if (s[i] - '0' > maxi)
    {
        maxi = s[i] - '0';
    }

    return f(s, ++i);
}

int main()
{
    string s;

    cin >> s;
    f(s, 0);
    cout << maxi;

    return 0;
}