#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for(int j=1; j<=n; j++)
        {
            scanf("%d", &arr[j]);
        }

        int s;
        scanf("%d", &s);
        int flag=0;
        for(int k=1; k<=n; k++)
        {
            if(s==arr[k])
            {
                printf("Case %d: %d\n", i, k);
                flag =1;
                break;
            }
        }

        if(flag==0)
            printf("Case %d:  Not Found\n", i);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
