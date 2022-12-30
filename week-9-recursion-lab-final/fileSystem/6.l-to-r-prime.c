#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t, l, r,flag,j,k;
    scanf("%d", &t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&l,&r);

        for( j=l; j<=r ; j++)
        {
            flag = 0;
            for( k=2; k<=j/2; k++ )
            {
                if(j%k == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag==0 )
            {
                printf("%d ", j);

            }

        }
        printf("\n");
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    getch();
    return 0;
}
