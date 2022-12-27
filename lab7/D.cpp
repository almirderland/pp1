#include <iostream>

using namespace std;

int sum = 0;

void f(string s, int i)
{
    if (i == s.size())
    {
        return;
    }
    sum += s[i] - '0';

    return f(s, ++i);
}

int main()
{
    string s;

    cin >> s;
    f(s, 0);
    cout << sum;

    return 0;
}