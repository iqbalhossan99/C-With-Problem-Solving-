
#include<stdio.h>
int main()
{
    int numbers, i, sum=0, temp=0, rem=0;

    scanf("%d", &numbers);
    temp = numbers;

    while(temp !=0)
    {
        rem = temp % 10;
        sum = sum + rem;
        temp = temp / 10;
    }
    printf("%d", sum);
    return 0;
}
