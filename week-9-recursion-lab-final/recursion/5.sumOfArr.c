#include<stdio.h>
int sum_arr(int i, int n, int arr[])
{
    if(i==n)
        return 0;
    int s = sum_arr(i+1, n, arr);
    printf("%d\n", s);
    return s + arr[i];
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    int r = sum_arr(0,n,arr);
    printf("%d", r);
    return 0;
}

