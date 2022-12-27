#include <bits/stdc++.h>

using namespace std;

int main () {
	int test_n, n, a[1005], cnt[1005];
	cin >> test_n;
	for (int t = 1; t <= test_n; t ++) {
		cin >> n;
		for (int i = 1; i <= n; i ++) {
			cnt[i] = 0;
		}
		for (int i = 1; i <= n; i ++) {
			cin >> a[i];
			cnt[a[i]] ++;
		}

		bool have_answer = false;
		int opt = -1;
		for (int i = 1; i <= n; i ++) {
			if (cnt[i] == 1) {
				have_answer = true;
				opt = i;
				break;
			}
		}

		if (have_answer == false) {
			cout << "ZA WARUDO" << '\n';
		}

		for (int i = 1; i <= n; i ++) {
			if (a[i] == opt) {
				cout << i << '\n';
				break;
			}
		}
	}
	return 0;
}