#include <stdio.h>
int sum( int x, int y)
{
    return  x + y;
}

int main()
{
    int x, y;
    printf("Enter x and y\n");
    scanf("%d %d", &x, &y);
    int result = sum(x,y);
    printf("%d\n", result);
    return 0;
}
  printf("Sum of %d and %d is: %d",
          x, y, sum(x, y));
