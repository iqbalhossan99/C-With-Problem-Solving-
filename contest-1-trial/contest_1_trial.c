#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int A, B;
    scanf("%d %d", &A, &B);
    if( (0<= A && A<=100) && (0<= B && B<=100)){

        int differenceAmount = A - B;

        printf("%d",differenceAmount);
    }
    return 0;
}
