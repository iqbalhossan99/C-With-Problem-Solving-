#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int t,n;
    scanf("%d", &t);

    for(int k=1; k<=t; k++)
    {
        scanf("%d", &n);
        int arr[n];

        for(int i=1; i<=n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int n1, n2, rem, gcd, pairCount=0;
        for(int i=1; i<=n; i++)
        {

            for(int j=1; j<=n; j++)
            {
                if(i != j)
                {
                    n1= arr[i];
                    n2 = arr[j];

                    while(n2 !=0)
                    {
                        rem = n1%n2;
                        n1 = n2;
                        n2 = rem;
                    }

                    if( n1==1)
                    {
                        pairCount +=1;
                    }
                }
            }
        }

        printf("%d\n", pairCount);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
