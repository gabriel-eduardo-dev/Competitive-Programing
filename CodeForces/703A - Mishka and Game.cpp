#include <iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int rounds = 0, mishka = 0, chris = 0;
    cin >> rounds;

    while (rounds--)
    {
        int m, c;
        cin >> m >> c;

        if (m == c)
            continue;
        else {
            if (m > c)
                mishka++;
            else
                chris++;
        }
    }
    if (mishka == chris)
        cout << "Friendship is magic!^^" << endl;
    else if (mishka > chris)
        cout << "Mishka" << endl;
    else
        cout << "Chris" << endl;

    return 0;
}