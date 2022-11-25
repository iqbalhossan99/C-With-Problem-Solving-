#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, M, i, j,cr=1, cc=1;
    int Arr[101][101];
    scanf("%d %d", &N, &M);

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=M; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }


    for(i=1; i<=N; i++)
    {

        for(j=1; j<=M; j++)
        {
           if(Arr[cr][cc] == Arr[i][j])
            {
                Arr[i][j] = Arr[i][j] + 3;
            }
            else if(cr == i)
            {
                Arr[i][j] = Arr[i][j] + 2;
            }
            else if(cc == j)
            {
                Arr[i][j] = Arr[i][j] + 1;
            }
        }
    }

    for(i=1; i<=N; i++)
    {
        for(j=1; j<=M; j++)
        {
            printf("%d ", Arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
