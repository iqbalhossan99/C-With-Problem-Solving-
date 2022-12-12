#include<stdio.h>

int main ()
{
   int num1,num2;

   scanf("%d %d", &num1, &num2);

   int maxNum = num1> num2 ? num1 : num2;

   printf("The maximum number is: %d", maxNum);
    return 0;
}
