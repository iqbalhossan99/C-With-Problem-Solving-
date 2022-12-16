#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    int totalDivisible = divisibleCount( n);
    printf("%d\n", totalDivisible);
    return 0;
}

int divisibleCount(int n)
{
    int count = 0;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int divisibleCountBy3 = divisibleByThree(n, arr);
    int divisibleCountBy5 = divisibleByFive(n, arr);

    int totalDivisbleCount = divisibleCountBy3 + divisibleCountBy5;

//        return totalDivisbleCount;
    if(totalDivisbleCount)
        return totalDivisbleCount;
    else
        return -1;
}

int divisibleByThree(int n, int arr[])
{
    int dv3count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 3 == 0)
        {
            dv3count++;
            arr[i] =1;
        }
    }

    return dv3count;
}

int divisibleByFive(int n, int arr[])
{
    int dv5count=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] % 5 == 0)
        {
            dv5count++;
            arr[i] =1;
        }
    }
    return dv5count;
}
