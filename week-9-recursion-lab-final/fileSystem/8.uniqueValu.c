#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

  int n;
    scanf("%d",&n);

    char s[n];
    scanf("%s",s);
    int uniqueCount = 0;
    for(char c = 'a'; c <= 'z'; c++)
    {
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == c)
            {
                count++;
            }
        }
        if(count == 1)
        {
            uniqueCount++;
        }
    }
    printf("%d ",uniqueCount);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
