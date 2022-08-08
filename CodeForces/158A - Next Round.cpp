#include <iostream>
using namespace std;

int main(){
    int n, k, point = 0;
    cin >> n >> k;
    int *a = new int[n];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    for(int i=0; i<n; ++i){
        if(a[i] >= a[k-1] && a[i] > 0){
            point++;
        }
    }
    cout << point;
    delete[] a;
    return 0;
}
