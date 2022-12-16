#include<stdio.h>
int median_Value(int arr[],  int n);

int main()
{
    int n, i, j;
    scanf("%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int ans = median_Value( arr, n);

   printf ("The Median value is: %d", ans);
    return 0;
}

int median_Value(int arr[],  int n)
{

    int temp;
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1]= temp;
            }
        }
    }

    int medianIndex, medianValue;
    if(n%2 != 0)
    {
        medianIndex = (n - 1)/ 2;
        medianValue = arr[medianIndex];
        return medianValue;
    }
    else
    {
        medianIndex = (n - 1)/ 2;
        medianValue = (arr[medianIndex] + arr[medianIndex+1])/2;
        return  medianValue ;
    }
}

