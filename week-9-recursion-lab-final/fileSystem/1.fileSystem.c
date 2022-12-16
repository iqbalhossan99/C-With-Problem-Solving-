#include<stdio.h>
int main()
{
//    FILE input/output using command line filename<input file name
//    FILE input/output using command line filename>output file name
//    FILE input/output using command line filename<input file name>output file name

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }

    printf("sum: %d", sum);
    return 0;
}
