
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T,i, j;
    long long int N;
    scanf("%d", &T);
    int count;

    for(i=1; i<=T; i++){
        scanf("%d", &N);

        count=0;
       if(N == 1){
        count++;
      }

       for(j=2; j<N; j++){
            if(N % j == 0){
                    count++;
                    break;
                }
        }

           if(count >0){
                printf("No\n");
            }else{
            printf("Yes\n");
            }


    }



    return 0;
}
