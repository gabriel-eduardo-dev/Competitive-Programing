#include <bits/stdc++.h>
#define nn '\n'
#define ll long long
#define vi vector<int>
#define vii vector<vector<int>>
#define io ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
// https://codeforces.com/problemset/problem/4/C
 
int main() {
	io;
 
	map<string, int> database;
	map<string, int>::iterator it;
 
	ll tt;
	cin >> tt;
	while (tt--) {
		string name;
		cin >> name;
		it = database.find(name);
		if (it == database.end()) {
			database[name] = 0;
			cout << "OK\n";
		} else {
			it->second += 1;
			string newName = name + to_string(it->second);
			cout << newName << '\n';
		}
	}
}
