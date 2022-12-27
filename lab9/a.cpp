#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
bool cmp (const pair<int, int>& a, const pair<int, int>& b)
{
    return a.second < b.second;
}
int main() {
    int n;
    cin>>n;
    multimap<int, int> mm;
    multimap<int, int>:: iterator it;
    for (int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        mm.insert(make_pair <int, int> (x,y));
    }
    sort(mm.begin(), mm.end(), cmp);
    for (it=mm.begin(); it!=mm.end(); it++)
    {
        cout<< (*it).first<<" "<<(*it).second<<endl;
    }

    return 0;
}