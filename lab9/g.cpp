#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    deque<char> dq;
    for (int i = 0; i < s.size(); i++)
    {
        if (dq.empty())
            dq.push_back(s[i]);
        else if (dq.back() == '1' and s[i] == '1')
            dq.pop_back();
        else
            dq.push_back(s[i]);
    }
    while (!dq.empty())
    {
        cout << dq.front();
        dq.pop_front();
    }

    return 0;
}