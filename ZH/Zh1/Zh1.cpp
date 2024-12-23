/*
 1. Írasd ki 0-tól 10 000-ig azokat a számokat, melyek utolsó számjegye megegyezik négyzetének első számjegyével! Pl.:246 
 */

#include <iostream>

int get_first_digit(int i);
int get_last_digit(int i);

int main()
{
    for (int i = 0; i <= 10000; i++)
    {
      int last_digit = get_last_digit(i);
      int square = i * i;
      int first_digit_of_square = get_first_digit(square);
      if (last_digit == first_digit_of_square)
      {
        std::cout << i << std::endl;
      }
    }
}

int get_first_digit(int i)
{
  while (i >= 10) i /= 10;
  return i;
}

int get_last_digit(int i)
{
  return i % 10;
}