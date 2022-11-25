#include<stdio.h>
int main()
{
    int i, j, numberOfRows, numberOfCols;

    int A[10][10] ;
    int B [10][10];
    int C[10][10];

    printf("Enter number of rows and number of columns: ");
    scanf("%d %d", &numberOfRows, &numberOfCols);
//      scanf A
    printf("Enter Elements for A matrix\n");
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d ", &A[i][j]);
        }
    }

//      scanf B matrix
    printf("\n\nEnter Elements for B matrix\n");

    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            printf("B[%d][%d] = ", i, j);
            scanf("%d ", &B[i][j]);
        }
    }

    //  printf A matrix
    printf("A =");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }


//  printf B matrix
    printf("\n\nB =");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

//  Matrix C
    for(i=0; i<numberOfRows; i++)
    {
        for(j=0; j<numberOfCols; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

//  Print C
    printf("\n\nC =");
    for(i=0; i<numberOfRows; i++)
    {
        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }




    return 0;
}

