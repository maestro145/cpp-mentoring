#include <iostream>

int findmax(int nums[], int size)
{
    if (size == 0)
        return 0;

    int max = 1;
    int current = 1;


    for (int i = 1; i < size; ++i)
    {
        if (nums[i] < nums[i - 1])
        {
            ++current;
        }
        else
        {
            if (current > max)
            {
            }
            current = 1;
        }
    }

    if (current > max)
    {
        max = current;
    }

    return max;
}

int main()
{
    int size;

    std::cout << "Введите размер массива: ";
    std::cin >> size;

    int nums[size];

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < size; ++i)
    {
        std::cin >> nums[i];
    }

    int max = findmax(nums, size);
    std::cout << "Наибольшая длина монотонно убывающего фрагмента: " << max << std::endl;

    return 0;
}
