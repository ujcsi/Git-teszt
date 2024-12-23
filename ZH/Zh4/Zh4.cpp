/*
 4. Írj programot, mely az in.txt szöveges állományban lévő 
szóközökkel elválasztott egész számok közül kiírja az out.txt 
állományba a legnagyobbat! Feltehetjük, hogy az állományban olyan 
számok vannak (nem tudjuk, hogy hány darab), melyek az int típusba 
beleférnek.
 */

#include <iostream>
#include <string>

void check(int& max, std::string& buf);

int main()
{
  FILE* in_file;
  FILE* out_file;

  char ch;

  fopen_s(&in_file, "in.txt", "r");
  fopen_s(&out_file, "out.txt", "w");

  int max = INT_MIN;
  std:std::string buf;

  while ((ch = fgetc(in_file)) != EOF) {
    if (ch == ' ') {
      check(max, buf);
    }
    else {
      buf += ch;
    }
  }
  check(max, buf);

  fputs(std::to_string(max).c_str(), out_file);

  fclose(in_file);
  fclose(out_file);
  return 0;
}

void check(int& max, std::string& buf)
{
  int num = std::stoi(buf);
  if (num > max) {
    max = num;
  }
  buf.clear();
  printf("%d .. %d \r\n", max, num);
}