#include <bits/stdc++.h>
#define nn '\n'
#define ll long long
#define vi vector<int>
#define vii vector<vector<int>>
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
 
// https://codeforces.com/problemset/problem/456/A

int main() {
	io;

	ll size;
	cin >> size;
	vii k(size);
	bool ans = false;

	for (ll i = 0; i < size; i++) {
		for (int j = 0; j < 2; j++) {
			ll a;
			cin >> a;
			k[i].push_back(a);
		}
	}
	sort(k.begin(), k.end(),
		[](vi& a, vi& b) {
			return a[0] < b[0];
		});

	for (ll i = 0; i < size-1; i++) {
		if (k[i][0] == k[i+1][0]) {
			continue;
		}
		else if (k[i][0] < k[i+1][0] && k[i][1] >= k[i+1][1]) {
			ans = true;
			break;
		}
	}
	
	(ans) ? cout << "Happy Alex\n"
		  : cout << "Poor Alex\n";
}
