
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t, i,j,k;
    scanf("%d", &t);
    char s[20];
    char reverseS[20];

    for(k=0; k<t; k++)
    {
//                fgets(s, sizeof(s), stdin);
scanf("%s", &s);
        int len = strlen(s);
        s[len]='\0';

        for(i=0; i<len; i++)
        {
            if(s[i] >=65 && s[i]<=90){
                s[i] = s[i] + 32;
            }
        }

        for(j=0, i= len-1; i>=0;  i--,j++)
        {
            reverseS[j] = s[i];
        }
        reverseS[len]='\0';
        int d = strcmp(s, reverseS);
        if(d==0)
        {
            if(len>7)
            {
                int charCount =0;
                for(i=1; i<len-1; i++)
                {
                    charCount++;
                }
                printf("Case #2: %c%d%c\n", reverseS[0],charCount,reverseS[len-1]);
            }
            else
            {
                printf("Case #3: %s\n", reverseS);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome \n");
        }
    }
    return 0;
}
