#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int t, n,i,j;

    scanf("%d", &t);


    for(i=0; i<t; i++)
    {
       int  pairCount=0;

        scanf("%d", &n);
        char s[n];
        scanf("%s", &s);
//        fgets(s, sizeof(s), stdin);

        s[n] ='\0';
        for(j=0; j<n; j++)
        {
            if(s[j] == '1' && s[j+1] == '0' || s[j] == '0' && s[j+1] == '1' )
            {
                pairCount++;
            }
        }

        printf("%d\n", pairCount);
    }

    return 0;
}
