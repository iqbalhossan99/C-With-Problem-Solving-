#include<stdio.h>
int main()
{
    int n;

    scanf("%d", &n);
    int arr[n];
//    arr[n] ='\0';
    int temp;
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i] );
    }

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>=arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d ", arr[i] );
    }
    return 0;
}
