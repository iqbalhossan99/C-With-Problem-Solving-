#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=n-i; j>0; j--)
        {
            printf(" ");
        }

        for(int j=1; j<=2*i-1; j++)
        {
            if(i%2 != 0)
                printf("^");
            else
                printf("*");
        }
        printf("\n");
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
