#include<stdio.h>
int main()
{
    int  rows, cols;
    scanf("%d%d", &rows, &cols);
    int firstMatrix[rows][cols];
    int secondMatrix[rows][cols];
    int sumOfMatrix[rows][cols];

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d", &secondMatrix[i][j]);
        }
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            sumOfMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
        }
    }

    printf("\n");
    for(int i=0; i<cols; i++)
    {
        for(int j=0; j<rows; j++)
        {
            printf("%d ", sumOfMatrix[i][j]);
        }
        printf("\n");
    }
}
