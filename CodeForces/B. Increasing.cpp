#include <bits/stdc++.h>

using namespace std;

#define rng_init		 mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x)		 mt19937 rng(x)
#define all(cont)		 (cont).begin(), (cont).end()
#define rall(cont)		 cont.end(), cont.begin()
#define sz(x)			 (int)(x).size()
#define PI				 3.1415926535897932384626433832795
#define mp				 make_pair
#define eb				 emplace_back
#define dbg1(v1)		 cerr << v1 << '\n'
#define dbg2(v1, v2)	 cerr << v1 << '\t' << v2 << '\n'
#define dbg3(v1, v2, v3) cerr << v1 << '\t' << v2 << '\t' << v3 << '\n'
using vi = vector<int>;
using vii = vector<vi>;
using vs = vector<string>;
using ll = long long;
using llu = long long unsigned int;

void solve() {
	char direction;
	cin >> direction;

	string str;
	cin >> str;

	int shift = (direction == 'R') ? 1 : -1;

	constexpr string_view keys = "qwertyuiop"
								 "asdfghjkl;"
								 "zxcvbnm,./";
	map<char, char> map;

	map.insert({ keys[0], keys[0] });
	map.insert({ keys[keys.length() - 1], keys[keys.length() - 1] });
	for (int i = 1; i < str.length() - 1; i++) {
		map.insert({ keys[i], keys[i - shift] });
	}

	string ans;
	for (const char ch : str) {
		ans += map[ch];
	}
	cout << ans << '\n';
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int TC = 1;
	// cin >> TC;
	while (TC--) {
		solve();
	}

	return 0;
}
