#include <iostream>
int main()
{
    int first, second, third, number;
    std::cin >> first;
    number = 0;
    while (first != 0)
    {
        if (second < third && first < second)
        {
            number += 1;
        }
        third = second;
        second = first;
        std::cin >> first;
    }
    std::cout << number;
    return 0;
}

