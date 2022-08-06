#include <iostream>
#include <set>
using namespace std;

int main(void)8
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int levels, sizeX, sizeY, temp;
    cin >> levels;
    cin >> sizeX;
    set<int> ans;

    for (int i = 0; i < sizeX; i++)
    {
        cin >> temp;
        ans.insert(temp);
    }
    cin >> sizeY;

    for (int i = 0; i < sizeY; i++)
    {
        cin >> temp;
        ans.insert(temp);
    }
    
    (ans.size() == levels) ? cout << "I become the guy." : cout << "Oh, my keyboard!";

    return 0 ;
}