#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, X,i, case1, case2, case3, totalMinutes;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d %%", &X);
        if(X<60){
            case1 = (60 - X) * 1;
            case2 = 20 * 2;
            case3 = 20 * 3;
            totalMinutes = case1 + case2 + case3;
        }
        else if(X < 80 && X > 60){
            case2 = (80 - X) * 2;
            case3 = 20 * 3;
            totalMinutes = case2 + case3;
        }
        else if (X >= 80){
            case3 = (100 - X) * 3;
            totalMinutes = case3;
        }

    printf("%d minutes\n", totalMinutes);

    }
    return 0;
}

