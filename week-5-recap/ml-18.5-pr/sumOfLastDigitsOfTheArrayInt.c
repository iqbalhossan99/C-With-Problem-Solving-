#include<stdio.h>
int main()
{
    int n, i, rem, temp, sum;

    scanf("%d", &n);

    int arr[n];

    for(i=0; i<n; i++)
    {
            scanf("%d", &arr[i]);
    }
sum = 0;
    for(i=0; i<n; i++){

        temp = arr[i];
        rem = temp % 10;
        sum = sum + rem;
//        temp = temp / 10;
    }

    printf("Sum = %d", sum);

    return 0;
}
