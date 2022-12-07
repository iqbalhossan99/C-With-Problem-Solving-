#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int total = sum(n);

    printf("%d", total);
    return 0;
}

int sum(int n)
{
    int arr[n];
    int sum_OfOdd=0, sum_OfEven=0, total;
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i=1; i<=n; i++)
    {
        if(i %2 != 0 && arr[i] %2!=0)
        {
            sum_OfOdd = sum_OfOdd + i + arr[i];
        }
        else if(i %2 == 0 && arr[i] %2==0)
        {
            sum_OfEven = sum_OfEven+ i + arr[i];
        }
    }

    total = sum_OfOdd + sum_OfEven;

    if(total)
        return total;
    else
        return 0;
}
