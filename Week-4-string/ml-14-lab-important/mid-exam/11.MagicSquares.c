// C program to generate odd sized magic squares
#include <stdio.h>
#include <string.h>
int main()
{

    int arr[3][3], i, j, sumd1=0, sumd2=0, f=0, sumr=0, sumc=0;
    printf("Enter matrix elements: \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
// Diagonal
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j)
            {
                sumd1 = sumd1+arr[i][j];
            }
            if(i+j==3-1)
            {
                sumd2=sumd2+arr[i][j];
            }
        }
    }

    if(sumd1!=sumd2)
    {
        f=1;
    }
    else
    {
        for(i=0; i<3; i++)
        {
            sumc=0;
            sumr=0;
            for(j=0; j<3; j++)
            {
                sumc=sumc+arr[j][i];
                sumr=sumr+arr[i][j];
            }
            if(sumc != sumd1)
            {
                f=1;
            }
            else if(sumr != sumd1)
            {
                f=1;
            }
            else
            {
                f=0;
            }
        }
    }

    if(f==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO \n");
    }



    getch();
}
