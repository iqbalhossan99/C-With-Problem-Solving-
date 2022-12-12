#include<stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
//        printf("%d", i);
//        printf("%d, ", i = (i-1) + (i-2));

        if(i==0 || i==1)
        {
            int first = 0;
            int second = 1;
            printf("%d ", i);
        }
        else
        {
//        printf("%d", i);
//        int next = (i-1) + (i-2);
            printf("%d, ", next);
//            break;
        }
    }

    return 0;
}
