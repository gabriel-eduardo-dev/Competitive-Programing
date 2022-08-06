#include <iostream>

int main(void)
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);

    int calories[4] = {0}, 
        temp, 
        ans;
    std::string str;

    for (int& i : calories){
        std::cin >> temp;
        i = temp;
    }
    std::cin >> str;

    for (const char& c : str)
        ans += calories[c-48-1];

    std::cout << ans;
    return 0;
}