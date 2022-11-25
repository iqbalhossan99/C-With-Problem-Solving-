
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
     int X, Y;
    scanf("%d %% %d %%", &X, &Y);
    if( (0<= X && X<=100) && (0<= Y && Y<=100)){

        int habibsShare = X * Y;

        printf("%d%%",habibsShare);

    }
    return 0;
}
