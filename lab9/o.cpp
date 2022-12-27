#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
	map<string, string> mp;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		string s1,s2;
		cin>>s1>>s2;
		mp[s1] = s2;
	}
	int r;
	cin>>r;
	map<string, string>::iterator it;

	for(int i=0;i<r;i++)
	{
		string s1,s2;
		cin>>s1>>s2;
		bool swt = false;
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(s1==(*it).first)
			{
				if(s2 == (*it).second)
				{
					cout<<"correct password"<<endl;
					swt = true;
				}
				else 
				{
					cout<<"password error"<<endl;
					swt = true;
				}
			}
		}
		if(swt == false)
		{
			cout<<"login error"<<endl;
		}

	}
	return 0;
}