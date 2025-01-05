#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void check(int* max, char* buf);

int main()
{
  FILE* in_file;
  FILE* out_file;

  char ch;

  in_file = fopen("in.txt", "r");
  out_file = fopen("out.txt", "w");

  if (in_file == NULL || out_file == NULL) {
    perror("Error opening file");
    return 1;
  }

  int max = INT_MIN;
  char buf[256] = { 0 };
  int buf_index = 0;

  while ((ch = fgetc(in_file)) != EOF) {
    if (ch == ' ') {
      buf[buf_index] = '\0';
      check(&max, buf);
      buf_index = 0;
    }
    else {
      buf[buf_index++] = ch;
    }
  }
  buf[buf_index] = '\0';
  check(&max, buf);

  fprintf(out_file, "%d", max);

  fclose(in_file);
  fclose(out_file);
  return 0;
}

void check(int* max, char* buf)
{
  int num = atoi(buf);
  if (num > *max) {
    *max = num;
  }
  buf[0] = '\0';
  printf("%d .. %d \r\n", *max, num);
}
