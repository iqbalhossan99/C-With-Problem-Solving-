#include<stdio.h>

int is_Prime(int  x)
{
    int i;
    for(i=2; i<x; i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    if(is_Prime(n))
        printf("This is prime number: %d", n);
    else
        printf("This is composite number: %d", n);

    return 0;
}
