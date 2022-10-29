#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/32/B

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string a, ans;
	cin >> a;

	for (int i = 0; i < int(a.size()); i += 2) {
		if (a[i] == '.') {
			ans += '0';
			--i;
		} else if (a[i] == '-' && a[i+1] == '.') {
			ans += '1';
		} else {
			ans += '2';
		}
	}
  
	cout << ans << '\n';
	return 0;
}
