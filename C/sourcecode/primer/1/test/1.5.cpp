#include<iostream>
int
main ()
{
  int ivar1 = 0, ivar2 = 0;
  while (std::cin >> ivar1 >> ivar2)
    {
      std::cout << "The mul of " << ivar1 << " and " << ivar2 << " is :";
      std::cout << (ivar1 * ivar2) << std::endl;
    }
  return 0;
}
