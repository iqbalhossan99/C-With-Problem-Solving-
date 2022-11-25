#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, i;
    scanf("%d", &T);
    int S, A, B,C, restNum;

    for(i=1; i<=T; i++){
    scanf("%d %d %d %d", &S, &A, &B, &C);

    restNum = S - ( A + B + C);

    printf("%d", restNum);
    }


    return 0;
}
