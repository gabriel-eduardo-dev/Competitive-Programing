#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/43/A

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	map<string, int> k;

	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		auto it = k.find(a);
		if (it != k.end()) {
			it->second++;
		} else {
			k.insert({a, 1});
		}
	}
	auto ans = std::max_element(k.begin(), k.end(),
		[] (const pair<string, int>& a, const pair<string, int>& b) {
		return a.second < b.second;
	});
	cout << ans->first << '\n';

	return 0;
}
