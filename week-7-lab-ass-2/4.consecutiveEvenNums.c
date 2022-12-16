
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    consecutive_Even(t);

    return 0;
}

void consecutive_Even(int t)
{
    int n;
    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        int x = (n/4) -3;
        printf("%d %d %d %d", x, x+2, x+4, x+6);
    }
}
