#include<stdio.h>
int main()
{

    int n,i,j;

    scanf("%d", &n);
    if(n>0)
    {
        i=n;
        while(i >= -n)
        {
            printf("%d ", i);
            i--;
        }
    } else if(n<0)
    {
        i= n;
        while(i <= -n)
        {
            printf("%d ", i);
            i++;
        }
    }

    return 0;
}
