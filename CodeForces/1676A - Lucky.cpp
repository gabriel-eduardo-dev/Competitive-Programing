#include <bits/stdc++.h>
using namespace std;
 
#define io ios_base::sync_with_stdio(0); cin.tie(0)
 
int main()
{
  io;
 
	int tt;
	cin >> tt;
 
	while (tt--) {
		string str;
		cin >> str;
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < str.size() / 2; ++i) {
			sum1 += str[i] - 48;
		}
		for (int i = str.size() / 2; i < str.size(); ++i) {
			sum2 += str[i] - 48;
		}
		(sum1 == sum2) ? cout << "yes\n" : cout << "no\n";
	}
}
