#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, ans; 
    string str; 
    cin >> n >> str;

    for (char& c : str)
        tolower(c);

    sort(str.begin(), str.end());

    for (int i = 0; i < n - 1; i++) {
       if (str[i] == str[i + 1])
            ans++;
    }
    n - ans == 26 ? cout << "YES" : cout << "NO";
    return 0;
}