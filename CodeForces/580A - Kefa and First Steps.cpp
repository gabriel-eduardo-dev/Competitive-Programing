#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr[i] = temp;
    }
    int max = 1, k = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i-1]) {
            k++;
            if (k > max) {
                max = k;
            }
        } else {
            k = 1;
        }
    }
    cout << max << '\n';
    delete arr;
    return 0;
}