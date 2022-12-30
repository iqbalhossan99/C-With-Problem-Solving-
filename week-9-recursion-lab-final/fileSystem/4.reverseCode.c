#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

    int t,n;
    scanf("%d", &t);
    for(int i=1; i<=t; i++ )
    {
        scanf("%d", &n);

        int temp, rem, reverseNum=0;
        temp=n;
        while(temp!=0)
        {
            rem = temp % 10;
            reverseNum = reverseNum * 10 + rem;
            temp = temp / 10;
            rem = rem + 64;

            printf("%c", rem);
        }

        printf("\n");
//      printf("reverse: %d\n",  reverseNum);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
