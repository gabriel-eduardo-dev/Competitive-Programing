#include <iostream>

int main(void) {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    int tt;
    std::cin >> tt;

    while (tt--) {
        int k;
        std::cin >> k;

        for (int i = 1; ; ++i) {
            if (i % 3 == 0 || i % 10 == 3)
                continue;
            else if (--k == 0) {
                std::cout << i << '\n';
                break;
            }
        }
    }
    return 0 ;
}