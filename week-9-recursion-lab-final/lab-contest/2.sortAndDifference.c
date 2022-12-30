#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int b[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }

    int temp;
// Ascending  a
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++ )
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

//  Descending b
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-1; j++ )
        {
            if(b[j] < b[j+1])
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }

// subtraction array
    int subtrArr[n];

    for(int i=0; i<n; i++)
    {
        subtrArr[i] = a[i] - b[i];
    }

    for(int i=0; i<n; i++)
    {
       printf("%d ", subtrArr[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
