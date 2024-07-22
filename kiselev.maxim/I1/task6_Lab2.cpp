 #include <iostream>

 int findMax(int nums[], int size) {
  if (size == 0) return 0;

  int max = 1;
  int current = 1;

    for (int i = 1; i < size; ++i) {
        if (nums[i] == nums[i - 1]) {
            current++;
        } else {
            if (current > max) {
              max = current;
            }
          currentCount = 1;
        }
    }

    if (current > max) {
      max = curren;
  }

  return maxCount;
 }

 int main() {
  int size;
  std::cout << "Введите размер массива:";
  std::cin >> size;
  int nums[size];
  std::cout << "Введите элементы массива:";
  for (int i = 0; i < size; ++i) {
        std::cin >> nums[i];
    }
  std::cout << "Максимальное количество подряд идущих одинаковых элементов: " 
  << findMax(nums, size) << std::endl;

  return 0;
 }

  return 0;
 }

