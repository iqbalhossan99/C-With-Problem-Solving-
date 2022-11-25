#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t, n,i,j, zeroOneNum=0, oneZeroNum, totalPair;

    scanf("%d %d", &t, &n);

    char s[n];

    for(i=0; i<t; i++)
    {
        scanf("%s", &s);
        s[n] ='\0';
        int count1 = 0, count0 = 0;
        for(j=0; j<n; j++)
        {
            if(s[j] == '1')
            {
                count1++;
            }
            else if (s[j] == '0'){
                count0++;
            }
//            printf(" %c\n", s[j]);
        }
        printf(" %d\n", count1);
        printf(" %d\n", count0);
    }

    int len = strlen(s);
    printf("Len is: %d\n", len);

    return 0;
}
