#include<stdio.h>
int main()
{
    int i, j;

    int A[3][4] ;
    int B [3][4];

//      scanf A
printf("Enter Elements for A matrix\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d ", &A[i][j]);
        }
    }

//  printf A matrix
    printf("A =");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

//      scanf B matrix
printf("\n\nEnter Elements for B matrix\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d ", &B[i][j]);
        }
    }

//  printf B matrix
    printf("B =");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}
