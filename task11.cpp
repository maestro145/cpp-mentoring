#include <iostream>
int main ()
{
  int a, b, i;
  std::cin>>a;
   b=a;
   i=-1;
    while (a!=0)
      {
        if (a%b==0)
          {
            i+=1;
          }
        b=a;
        std::cin>>a;
      }
  std::cout<<i;
  return 0;
}
