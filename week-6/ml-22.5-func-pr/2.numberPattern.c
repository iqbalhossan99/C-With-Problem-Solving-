#include<stdio.h>
int Prime(int num);
int Prime(int num)
{
    int flag;
    for(int i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            flag = 0;
            break;
        }else{
            flag = 1;
        }
    }

    if(flag || num ==2)
        return 1;
    else
        return 0;
}

int main()
{
    int n, i,j;
    scanf("%d", &n);
    int count = 2;

    for(i=0;i<=n;i++)
    {
        for(j=0;j<i;j++)
        {
            while(!Prime(count))
            {
                count++;
            }
                     printf("%d\t", count++);

        }
          printf("\n");
    }

    return 0;
}


