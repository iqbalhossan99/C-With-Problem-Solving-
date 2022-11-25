#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, countP=0, countM=0, max=0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);
    s[n] = '\0';
    int len = strlen(s);
    for(i=0; i<len; i++)
    {
        if(s[i]== '-' &&  s[i+1] =='-')
            countM++;
        else if(s[i]== '+' &&  s[i+1] =='+')
            countP++;
    }

      if(countP>countM)
        {
            printf("plus: %d\n", countP);
        }
        else
            printf("minus: %d\n", countM);

    return 0;
}

