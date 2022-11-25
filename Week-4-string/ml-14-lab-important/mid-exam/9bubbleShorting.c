
#include<stdio.h>
int main()
{
    int N=11;
    int i, j;
    int arr[11] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    int temp;
    for(j=0; j<5; j++)
    {
        for(i=0; i<(5-1); i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1]= temp;
            }
        }
    }
    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
