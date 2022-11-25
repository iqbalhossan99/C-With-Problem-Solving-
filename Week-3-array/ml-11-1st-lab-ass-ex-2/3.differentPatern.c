
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N,i,j;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
            for(j=i; j>=1; j--){
                printf("%d ", j);
            }
            printf("\n");
    }
    return 0;
}
