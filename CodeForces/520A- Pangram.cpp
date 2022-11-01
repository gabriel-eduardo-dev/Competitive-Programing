#include <bits/stdc++.h>
#define nn '\n'
#define ll long long
#define vi vector<int>
#define vii vector<vector<int>>
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
using namespace std;
 
// https://codeforces.com/contest/520/problem/A
 
int main() {
	io;
 
	int size;
	string str;
	set<char> ss;
	cin >> size >> str;
 
	if (size < 26) {
		cout << "NO\n";
	}
	else {
		for (int i = 0; i < size; i++) {
			ss.insert(tolower(str[i]));
		}
		(ss.size() == 26) ? cout << "YES\n"
						  : cout << "NO\n";
	}
}
