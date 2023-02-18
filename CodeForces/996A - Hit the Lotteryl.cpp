#include <bits/stdc++.h>
using namespace std;

#define io ios_base::sync_with_stdio(0); cin.tie(0)

int main()
{
	io;

	int in, sum = 0, ans = 0;
	int f[5] = { 100, 20, 10, 5, 1 };
	cin >> in;

	for (int i = 0; i < 5; ++i) {
		while (sum + f[i] <= in) {
			sum += f[i];
			++ans;
		}
	}
	cout << ans << '\n';
}
