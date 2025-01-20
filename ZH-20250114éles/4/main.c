#include <stdio.h>
#include <stdlib.h>

void check(char* buf, FILE* out_file);

int main()
{
  FILE* in_file;
  FILE* out_file;

  char ch;

  in_file = fopen("in.txt", "r");
  out_file = fopen("out.txt", "w");

  char buf[256] = { 0 };
  int buf_index = 0;

  while ((ch = fgetc(in_file)) != EOF) {
    if (ch == ' ') {
      buf[buf_index] = '\0';
      check(buf, out_file);
      buf_index = 0;
    }
    else {
      buf[buf_index++] = ch;
    }
  }
  buf[buf_index] = '\0';
  check(buf, out_file);

  fclose(in_file);
  fclose(out_file);
  return 0;
}

void check(char* buf, FILE* out_file)
{

  for (char n = '0'; n <= '9'; n++) {
    char* p = buf;
    int count = 0;
    while (count < 2 && *p != 0)
    {
      if (*p == n)
      {
        count++;
      }
      p++;
    }
      if (count >1)
      {
        fprintf(out_file, "%s ", buf);
        return;
      }
  }
}
