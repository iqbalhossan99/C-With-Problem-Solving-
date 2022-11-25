#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, i, max=0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);
    s[n] = '\0';
    int len = strlen(s);
        int counter=0;

    for(i=0; i<n-1; i++)
    {
        if(s[i] == s[i+1])
            counter++;
        else
            counter = 1;

         if(counter> max)
            max = counter;


    }
        printf("%d\n", max);





    return 0;
}

