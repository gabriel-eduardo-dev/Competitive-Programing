#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long tt;
    cin >> tt;

    while (tt--) {
        long long temp;
        cin >> temp;
        
        if (temp <= 2) {
            cout << 0 << '\n';
        }
        else if (temp % 2 == 0) {
            cout << (temp / 2) - 1 << '\n';
        }
        else {
            cout << temp / 2 << '\n';
        }
    }
    return 0;
}
