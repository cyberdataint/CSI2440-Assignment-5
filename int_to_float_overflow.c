#include <stdio.h>

int main()
{
  int i = 0;
  int j = (int)(float)i;

  while((j = (int)(float)i) == i) {
    i++;
}
  printf("i=%d\nj=%d\n", i, j);
}

