#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);     

    int tt;
    cin >> tt;

    while (tt--)
    {
        string b;
        cin >> b;

        if (int(b.size()) == 2)
            cout << b << endl;
        else
        {
            string ans;
            ans += b[0];
            for (int i = 1; i < int(b.size()); i++)
                if (i % 2 != 0)
                    ans += b[i];

            cout << ans << endl;
        }
    }
    return 0 ;
}