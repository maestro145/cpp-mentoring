#include <iostream>
int main()
{
    int First;
    std::cin >> First;
    int Second, Third, Number;
    Number = 0;
    Third = Second;
    Second = First;
    while (First != 0)
    {
        if (Second < Third && First < Second)
        {
            Number += 1;
        }
        Third = Second;
        Second = First;
        std::cin >> First;
    }
    std::cout << Number;
    return 0;
}
