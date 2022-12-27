#include <bits/stdc++.h>
using namespace std;
bool checker[222];
int main()
{
    string s;
    cin >> s;
    int R = 0, F = 0;
    for(int i = 0; i < s.size(); i++)
{
        if(s[i] == 'F')
{
            F++;
        }
        if(s[i] == 'B')
{
            F--;
        }
        if(s[i] == 'R')
{
            R++;
        }
        if(s[i] == 'L')
{
           
	    R--;
        }

    }
    char c = 'B';
    if(F< 0)c = 'F', F= -F;
    for(int i = 0; i < F; i++)cout << c;
    c = 'L';
    if(R< 0)c = 'R', R= -R;
    for(int i = 0; i < R; i++)cout << c;


}