#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int tt;
    cin >> tt;
    while (tt--) {
        int size;
        cin >> size;
        vector<int> vec;
        for (int i = 0; i < size; ++i) {
            int temp;
            cin >> temp;
            vec.push_back(temp);
        }
        int index;
        for (int i = 0; i < size; ++i) {
            int count = 0;
            for (int j = 0; j < size; ++j) {
                if (vec[i] != vec[j]) {
                    ++count;
                    if (count == 2) {
                        break;
                    }
                }
            }
            if (count == 2) {
                index = i;
                break;
            } 
        }
        cout << index + 1 << '\n';
    }
}
