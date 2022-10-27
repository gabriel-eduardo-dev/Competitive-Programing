#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1433/A

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int tt;
	cin >> tt;
	while (tt--) {
		string t;
		int ans = 0;

		cin >> t;

		ans += (t[0] - 48) * 10 - 10;
		switch (t.size()) {
			case 1:
				ans++;
				break;
			case 2:
				ans += 3;
				break;
			case 3:
				ans += 6;
				break;
			case 4:
				ans += 10;
				break;
			default:
				break;
		}
		cout << ans << '\n';
	}
	return 0;
}
