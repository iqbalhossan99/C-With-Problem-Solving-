#include<stdio.h>
//void twoStrArr( int n);
char twoStrArr(  int n)
{


    char array[n][20];
    for(int i=0; i<n; i++)
    {
        scanf("%s", &array[i]);
    }


    for(int i =0; i<n; i++)
    {
        printf("%s ", array[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);


    twoStrArr( n);

    return 0;
}
