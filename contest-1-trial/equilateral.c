#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
   int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if( (0<= A && A<=100) && (0<= B && B<=100) && (0<= C && C<=100)){
        if( A == B && A==C ){
            printf("Yes");
        }else{
            printf("No");
        }
    }
    return 0;
}
