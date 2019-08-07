#include <stdio.h>

int main()
{
  int x, y, t;

  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);

  printf("Before Swapping\n a = %d\n b = %d\n", x, y);

  t = x;
  x = y;
  y = t;

  printf("After Swapping\n a = %d\n b = %d\n", x, y);

  return 0;
}
