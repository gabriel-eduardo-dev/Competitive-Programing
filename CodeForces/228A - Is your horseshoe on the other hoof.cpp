#include <iostream>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    set<int> arr;
    for (int i = 0; i < 4; i++){
        int temp;
        cin >> temp;
        arr.insert(temp);
    }
    short ans = (int)arr.size() - 4;
    ans = -ans;
    cout << ans << endl;
    return 0;
}