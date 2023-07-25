#include <bits/stdc++.h>

using namespace std;

#define rng_init	mt19937 rng(chrono::steady_clock::now().time_since_epoch().count())
#define rng_seed(x) mt19937 rng(x)
#define all(cont)	(cont).begin(), (cont).end()
#define rall(cont)	cont.end(), cont.begin()
#define sz(x)		(int)(x).size()
#define PI			3.1415926535897932384626433832795
#define mp			make_pair
#define eb			emplace_back
template <typename T>
void print_arg(const T &arg) {
	cout << arg << ' ';
}
template <typename T, typename... Args>
void print_arg(const T &arg, const Args &...args) {
	cout << arg << ' ';
	print_arg(args...);
}
template <typename... Args>
void print(const Args &...args) {
	print_arg(args...);
	cout << '\n';
}
template <typename T>
void read_arg(T &arg) {
	cin >> arg;
}
template <typename T, typename... Args>
void read_arg(T &arg, Args &...args) {
	cin >> arg;
	read_arg(args...);
}
template <typename... Args>
void read(Args &...args) {
	read_arg(args...);
}

template <typename T>
using vt = vector<T>;

using vi = vector<int>;
using vii = vector<vi>;
using vs = vector<string>;
using ll = long long;
using llu = long long unsigned int;

void solve() {
	ll n, k;
	read(n, k);

	if (k <= (n + 1) / 2) { print(2 * k - 1); }
	else { print(2 * (k - (n + 1) / 2)); }
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
