#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str1, str2, ans;
    cin >> str1 >> str2;

    for (int i = 0; i < (int)str1.size(); i++){
        if (str1[i] != str2[i]){
            ans += '1';
        }
        else{
            ans += '0';
        }
    }

    cout << ans << endl;
}
