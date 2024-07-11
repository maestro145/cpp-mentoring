#include <iostream>
int main ()
{
  int a, b, c, i;
  std::cin>>a;
   i=0;
   b = a;
   c = b;
    while (a !=0)
      {
        if (b<c && a<b)
          {
            i+=1;
          }
        c = b;
        b = a;
        std::cin>>a;
      }
  std::cout<<i;
  return 0;
}
