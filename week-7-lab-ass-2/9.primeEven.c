#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", arr + i);
    }

    primeCount(arr,n);
    averageEven(arr,n);
    return 0;
}

void primeCount(int arr[], int n)
{
    int primeNums=0;
    for(int i=0; i<n; i++)
    {
        int flag=0;
        for(int j=2; j<*(arr + i); j++ )
        {
            if( *(arr + i) % j == 0)
            {
                flag++;
                break;
            }
        }

        if(flag == 0)
        {
            primeNums++ ;
        }
    }
    printf("Prime numbers: %d\n", primeNums );

}


void averageEven(int arr[], int n)
{
    int sum=0, avr, evenCount=0;

    for(int i=0; i<n; i++)
    {
        if(  i%2==0 && *(arr + i) % 2==0)
        {
            evenCount++;
            sum += *(arr+i);
        }
    }

    avr = sum/evenCount;
    printf("Average of all even integers: %d.00", avr);
}
