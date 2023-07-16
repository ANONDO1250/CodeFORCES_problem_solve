#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, m, k;
        std::cin >> n >> m >> k;

        int x, y;
        std::cin >> x >> y;

        bool canEscape = true;
        for (int i = 0; i < k; ++i)
        {
            int xi, yi;
            std::cin >> xi >> yi;

            if (std::abs(x - xi) + std::abs(y - yi) <= 1)
            {
                canEscape = false;
                break;
            }
        }

        if (canEscape)
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }

    return 0;
}
