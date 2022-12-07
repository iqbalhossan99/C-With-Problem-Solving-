#include<stdio.h>

int main ()
{
    int n, sum = 0, sign = 1;
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        sum = sum + (i * sign);
        if(i % 3 == 0){
            sign = sign * (-1);
        }
    }

    printf("%d",sum);
    return 0;
}
