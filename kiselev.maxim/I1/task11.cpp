#include <iostream>
int main ()
{
  int first, second, number;
  std::cin>>first;
   number=-1;
    while (first!=0)
      {
        if (first%second==0)
          {
            number+=1;
          }
        second=first;
        std::cin>>first;
      }
  std::cout<<number;
  return 0;
}

