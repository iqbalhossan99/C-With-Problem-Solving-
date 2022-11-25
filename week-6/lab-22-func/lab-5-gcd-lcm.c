#include<stdio.h>
int gcd_lcm(int num1, int num2);
int gcd_lcm(int num1, int num2)
{
    int n1, n2, rem;
    n1=num1;
    n2=num2;
    while(n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    int gcd = n1;
    int lcm = (num1*num2) / gcd;
    printf("GCD is: %d\n", gcd);
    printf("LCM is: %d\n", lcm);

}
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

   gcd_lcm(num1, num2);

}
