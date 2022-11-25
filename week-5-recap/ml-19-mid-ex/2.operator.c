#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[21];
    int a, b, i,sum, mult;

    sum=0;
    mult=0;

    fgets(s, sizeof(s) , stdin);
    scanf("%d %d", &a, &b);

    int length = strlen(s);
    for(i=0; i<length; i++)
    {
        if(s[i] == '+')
        {
            sum = sum+ a + b;
        }
        else if(s[i] == '*')
        {
            mult = a * b;
            sum = sum + mult;
        }
    }

    printf("%d", sum);





    return 0;
}
