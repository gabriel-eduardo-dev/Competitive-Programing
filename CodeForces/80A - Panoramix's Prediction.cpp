#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/80/A

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m, k = -1;
	cin >> n >> m;
	
	for (int i = 1; i <= m; i++) {
		int c = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				++c;
				if (c == 3) {
					break;
				}
			}
		}
		if (c == 2 && i > n) {
			k = i;
			break;
		}
	}
	(m == k) ? cout << "YES\n" : cout << "NO\n";
	return 0;
}
