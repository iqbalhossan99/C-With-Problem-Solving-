

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, uniqueHandShakes;
    scanf("%d", &N);
    uniqueHandShakes = ( N * (N-1))/2;
    printf("%d", uniqueHandShakes);
    return 0;
}
