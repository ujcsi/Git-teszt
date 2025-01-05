/*
 2. Adj meg egy egészekből álló 14x14-es tömböt, majd írasd ki, hány eleme kisebb, mint az első sor elemeinek szorzata! 
 */

#include <iomanip>
#include <iostream>

int main()
{
  std::srand(std::time(nullptr));
  int array[14][14];
  int product = 1;
  for (int i = 0;i < 14 * 14;++i)
  {
    int num = rand();
    if (i < 14)
    {
      num = (num % 3) +1;
      product *= num;
    }
    array[i / 14][i % 14] = num;
    std::cout << std::setw(7) << std::setfill(' ') << num;
    if (i % 14 == 13)
    {
      std::cout << std::endl;
    }
  }

  int count = 0;
  for (int i = 0;i < 14 * 14;++i)
  {
    count += array[i / 14][i % 14] < product;
  }

  std::cout << count << " element is smaller than " << product << std::endl;
}
