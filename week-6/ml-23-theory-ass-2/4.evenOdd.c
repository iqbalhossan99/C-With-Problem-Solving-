
#include<stdio.h>
int main()
{
    int n, k, j=1;
    scanf("%d%d", &n,&k);
    int numArr[n];

    for(int i=1; i<=n; i++)
    {
        if(i% 2 == 0)
        {
            numArr[j] = i;
            j++;
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(i% 2 != 0)
        {
            numArr[j] = i;
            j++;
        }
    }

    printf("\n");

    for(int i=1; i<=n; i++)
    {
        printf("%d ", numArr[i]);

    }

    printf("\n");

    for(int i=0; i<n; i++)
    {
        if(i == k)
        printf("The %dth element in this sequence is %d.", k, numArr[i]);

    }
    return 0;

}
