#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    string str; cin >> str;

    if(str.size() < 26)
    {
        cout << "NO\n";
    }
    else
    {
        for_each(str.begin(), str.end(), [] (char &x) {x = ::tolower(x);});
        sort(str.begin(), str.end());
        for (int i = 0; i < str.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (str[i] == str[j])
                {
                    str[i] = '\0';
                }
            }
        }
        str.erase(remove(str.begin(), str.end(), '\0'), str.end());
        str.size() == 26 ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}