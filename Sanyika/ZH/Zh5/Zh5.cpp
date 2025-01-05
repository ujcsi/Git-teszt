/*
 5. Írj programot, melyben a telefon típusnak két mezője van: egy int 
típusú mező:gombok_szama, illetve egy float típusú mező: tomeg. 
Kérd be a telefon típusú telo1 és a telo2 változóba két telefon adatait, 
majd írasd ki a kevesebb gombbal rendelkező telefon tömegét! 
 */

#include <iostream>

struct Telefon {
  int gombok_szama;
  float tomeg;
};

void Read(Telefon& tel);

int main()
{
  Telefon tel1;
  Read(tel1);
  Telefon tel2;
  Read(tel2);

  Telefon required = (tel1.gombok_szama < tel2.gombok_szama) ? tel1 : tel2;
  std::cout << "A(z) "<<required.gombok_szama<< " gombu telefon tomege:" << required.tomeg << std::endl;
}

void Read(Telefon& tel)
{
  std::cout << "Gombok szama?";
  std::cin >> tel.gombok_szama;
  std::cout << "Tomeg?";
  std::cin >> tel.tomeg;
}