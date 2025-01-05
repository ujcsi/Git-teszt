/*
3. Írj függvényt, mely kiírja az elso paraméterében átvett char típusú
karaktert, valamint visszaadja a második paramétere által, hogy
számjegy-e (számjegy: igaz, nem számjegy: hamis)!
 */

#include <iostream>

void test(char c);
void doWork(char c, bool& is_digit);

int main()
{
  test('0'-1);
  test('0');
  test('9');
  test('9'+1);
}

void test(char c) {
  bool is_digit;
  doWork(c, is_digit);
  std::cout << (is_digit ? " igaz" : " hamis") << std::endl;
}

void doWork(char c, bool& is_digit)
{
  std::cout << c;
  is_digit = c >= '0' && c <= '9';
}