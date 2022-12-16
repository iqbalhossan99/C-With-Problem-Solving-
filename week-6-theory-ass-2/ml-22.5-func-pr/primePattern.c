#include<stdio.h>
int prime(int num);
int main() {
   int n, i, j;
   scanf("%d", &n);
   int num = 2;

   for (i = 0; i < n; i++) {
      printf("\n");
      for (j = 0; j <= i; j++) {
         while (!prime(num)) {
            num++;
         }
         printf("%d\t", num++);
      }
   }
   return (0);
}

int prime(int num) {
   int i, flag;
   for (i = 2; i < num; i++) {
      if (num % i != 0)
         flag = 1;
      else {
         flag = 0;
         break;
      }
   }

   if (flag == 1 || num == 2)
      return (1);
   else
      return (0);
}
