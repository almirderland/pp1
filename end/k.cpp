#include <bits/stdc++.h>

using namespace std;

string a[1001], b[1001];
int main () {
	int n; cin >> n;
	map <string, string> res, change;
	for (int i = 1; i <= n; i ++) {
		cin >> a[i] >> b[i];
		if (change.count (a[i]))
			a[i] = change[a[i]];
		change[b[i]] = a[i];
		res[a[i]] = b[i];
	}

    map <string, string>:: iterator it;
    for (it= res.begin(); it!=res.end(); it++)
    cout<< (*it).first<<" "<< (*it).second<< '\n';
	return 0;
}