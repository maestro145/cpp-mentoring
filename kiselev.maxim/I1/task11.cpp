#include <iostream>
int main()
{
    int First;
    std::cin >> First;
    int Second, Number;
    Number = -1;
    while (First != 0)
    {
        if (First % Second == 0)
        {
            Number += 1;
        }
        Second = First;
        std::cin >> First;
    }
    std::cout << Number;
    return 0;
}
