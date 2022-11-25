
#include<stdio.h>
int main()
{
    int N=8;
    int i, j;
    int arr[8] = {2, 45, 5,90,8,34,10,25};
    int temp;
    for(j=0; j<N; j++)
    {
        for(i=0; i<(N-1); i++)
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
//    printf("\n");
    return 0;
}
