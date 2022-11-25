#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, X,i,j, totalMinutes;
    scanf("%d", &T);
    int arr[T];
    for(i=1; i<=T; i++){
        scanf("%d%%", &X);
        for(j=i;j<=T; j++){
         if(X<60){
            totalMinutes = ((60 - X) * 1) + ( 20 * 2) + (20 * 3);
        }
        else if(X < 80 && X > 60){
            totalMinutes = ((80 - X) * 2) + (20 * 3);
        }
        else if (X >= 80){
            totalMinutes = ( (100 - X) * 3);
        }

    }
        printf("%d minutes\n", totalMinutes);

    }



    return 0;
}


