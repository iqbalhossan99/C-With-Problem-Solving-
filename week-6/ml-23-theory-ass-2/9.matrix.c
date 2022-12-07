#include<stdio.h>
int main()
{
    int rows=3, cols=3;
    scanf("%d%d", &rows, &cols);
    int mainMatrix[rows][cols];
    int transpose[cols][rows];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            scanf("%d", &mainMatrix[i][j]);
        }
    }

    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            transpose[j][i] = mainMatrix[i][j];
        }
    }

    for(int i=0; i<cols; i++)
    {
        for(int j=0; j<rows; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}
