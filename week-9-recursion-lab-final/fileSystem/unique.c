#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for( int i=0; i<n; i++){
        int flag =0;
        for(int j=0; j<n; j++)
        {
            if(arr[i] == arr[j] && i!=j)
            {

                flag=1;
            }
        }
        if(!flag)
            printf("%d", arr[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
