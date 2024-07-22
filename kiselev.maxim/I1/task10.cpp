 #include <iostream>
 int main()
  {
    int first;
    std::cin >> first;
    int second, third, number;
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

