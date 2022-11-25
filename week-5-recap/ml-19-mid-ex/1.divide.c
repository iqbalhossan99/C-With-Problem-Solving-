#include<stdio.h>
int main()
{
    long long int n, amount;
    scanf("%lld", &n);

    if(n%3==0)
    {
        amount = n / 3;
        printf("%lld", amount );
    }
    else
    {
        printf("%d", -1 );
    }
    return 0;
}
