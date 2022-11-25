#include<stdio.h>
int main()
{

    int n,i,j, space, count;


    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        for (space = 0; space < n - i; space++)
        {
            printf("  ");
        }

        for(j=0; j<n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

