#include <bits/stdc++.h>
using namespace std;

#define io ios_base::sync_with_stdio(0); cin.tie(0)

int main()
{
	io;

	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		string str;
		cin >> n >> str;
		bool ok = true;
		for (int i = 0; i < str.size(); ++i) {
			if (str[i] != str[i+1]) {
				for (int j = i+1; j < str.size(); ++j) {
					if (str[i] == str[j]) {
						ok = false;
						break;
					}
				}
			}
			if (ok == false) {
				break;
			}
		}
		(ok) ? cout << "yes\n" : cout << "no\n";
	}
}
