#include<stdio.h>
int main()
{

    int num1, num2;
    float avg;
//    x = 4/2 + 8 * 4 - (5 +2) % 3;
//    printf("You result is: %d", x);
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    avg = (float) num1 / num2;
    printf("Your result is: %f", avg);
}
